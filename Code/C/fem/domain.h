#include "node.h"
#include "constraint.h"

typedef struct struct_domain {
  Node *theNodes;
  Constraint *theConstraints;
} Domain;

void domainPrint(Domain *theDomain);
void domainAddNode(Domain *theDomain, int tag, double crd1, double crd2, int fix1, int fix2, int fix3);
void domainPrintNodes(Domain *theDomain);
Node *domainGetNode(Domain *, int nodeTag);

