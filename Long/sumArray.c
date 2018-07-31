#include <stdio.h>
#include <stdlib.h>
double sumArray(double *data, int size);

int main(int argc, const char **argv) {
	int size = argc - 1;
	double *data = (double *)malloc(size*sizeof(double));
	for (int ii = 0; ii < size; ii++) {
		data[ii] = atof(argv[ii+1]);	
		if (ii == size - 1) {
			double sum = sumArray(data, size);
			printf(	"%.4f = %.4f\n", data[ii], sum);
		} else {
		        printf("%.4f + ", data[ii]);
		}
	}
  return 0;
}

double sumArray(double *data, int size) {
    if (size == 1) {
	    return data[0];
    } else {
	    return data[size-1] + sumArray(data, size-1);
    }
   // double sum = 0;
   // for (int ii = 0; ii < size; ii++){
//	    sum = sum + data[ii];
  //  }
   // return sum;
}
	       
