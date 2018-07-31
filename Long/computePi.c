#include <stdio.h>
#include <time.h>
static int long numSteps = 1000000;

int main() {
	double pi = 0, time = 0;
	double dx = 1.0 / numSteps;
        double x = dx / 2;
	time = clock();
	for (int ii = 1; ii < numSteps; ii++) {
		pi += 4.0 / ( 1 + x * x ) * dx;
		x += dx;
	}
	time = clock() - time;
	printf("pi = %.15f, duration = %f ms\n", pi, time);
}
