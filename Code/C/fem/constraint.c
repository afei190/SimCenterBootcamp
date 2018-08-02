#include <stdio.h>
#include "constraint.h"

void constraintPrint(Constraint *theConstraint){
  printf("Constraint : %d ", theConstraint->nodetag);
  //printf("DOF : %d ", theConstraint->numDOF);
  //printf("Fixities: ");
  //for (int ii = 0; ii < theConstraint->numDOF; ii++) {
//	  printf("%d ", theConstraint->fixities[ii]);
 // }
 // printf("\n");
  printf("Fixities: %d %d %d \n", theConstraint->fix1, theConstraint->fix2, theConstraint->fix3);

}

//void constraintSetup(Constraint *theConstraint, int nodetag, int numDOF, int* fixities) {
void constraintSetup(Constraint *theConstraint, int nodetag, int fix1, int fix2, int fix3) {
  theConstraint->nodetag = nodetag;
  //theConstraint->numDOF = numDOF;
 // for (int ii = 0; ii < numDOF; ii++){
//	  theConstraint->fixities[ii] = fixities[ii];
 // }
  theConstraint->fix1 = fix1;
  theConstraint->fix2 = fix2;
  theConstraint->fix3 = fix3;

  theConstraint->next = NULL;
}
