#ifndef _CONSTRAINT
#define _CONSTRAINT 

#include <stdio.h>
#include <stdlib.h>
typedef struct Constraint {
  int nodetag;
  //int numDOF;
  //int fixities[3];
  //int *fixities = (int *)malloc(numDOF*sizeof(int));
  int fix1, fix2, fix3;
  struct constraint *next;
} Constraint;

void constraintPrint(Constraint *);
//void constraintSetup(Constraint *, int nodetag, int numDOF, int* fixities);
void constraintSetup(Constraint *, int nodetag, int fix1, int fix2, int fix3);

#endif
