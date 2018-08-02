#include <stdio.h>
#include <stdlib.h>
#include "domain.h"
#include "node.h"
#include "constraint.h"

void domainPrint(Domain *theDomain) {
  printf("The Nodes:\n");
  domainPrintNodes(theDomain);
}

void domainAddNode(Domain *theDomain, int tag, double crd1, double crd2, int fix1, int fix2, int fix3) {
  Node *theNextNode = (Node *)malloc(sizeof(Node));
  Constraint *theNextConstraint = (Constraint *)malloc(sizeof(Constraint));
  nodeSetup(theNextNode, tag, crd1, crd2);
  constraintSetup(theNextConstraint, tag, fix1, fix2, fix3);

  if (theDomain->theNodes != NULL) {
    theNextNode->next = theDomain->theNodes;
    theNextConstraint->next = theDomain->theConstraints;
  } else {
	  theNextNode->next = NULL;
	  theNextConstraint->next = NULL;
  }
  theDomain->theNodes = theNextNode;
  theDomain->theConstraints = theNextConstraint;
}

void domainPrintNodes(Domain *theDomain) {
  Node *theCurrentNode = theDomain->theNodes;
  Constraint *theCurrentConstraint = theDomain->theConstraints;
  while (theCurrentNode != NULL) {
    nodePrint(theCurrentNode);
    constraintPrint(theCurrentConstraint);
    theCurrentNode = theCurrentNode->next;
    theCurrentConstraint = theCurrentConstraint->next;
  };
}

Node *domainGetNode(Domain *theDomain, int nodeTag) {
  Node *theCurrentNode = theDomain->theNodes;
  while (theCurrentNode != NULL) {
    if (theCurrentNode->tag == nodeTag) {
      return theCurrentNode;
    } else {
      theCurrentNode = theCurrentNode->next;
    }
  };
  return NULL;
}
