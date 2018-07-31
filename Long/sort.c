#include <stdio.h>
#include <stdlib.h>
double Sort(double *data, int lbound, int ubound);

int main(int argc, const char **argv) {
	int size = argc - 1;
	double *data = (double *)malloc(size*sizeof(double));
	for (int ii = 0; ii < size; ii++) {
		data[ii] = atof(argv[ii+1]);	
	}
        double *dataSorted = Sort(data, 0, size-1) 
	for (int ii = 0; ii < size; ii++) {
		printf("%.4f", data[ii]);
	}
  return 0;
}

double Sort(double *data, int lbound,int ubound) {
    if (ubound == lbound) {
	    return data[lbound];
    } else if(ubound - lbound == 1) {
	    return data[size-1] + sumArray(data, size-1);
    }
}
	       
