#include <stdio.h>
double doubleProduct(double a, double b);
int main() {
	double double1, double2, product;
	printf("Enter first float: ");
	scanf("%lf", &double1); // read input to double 1
	printf("Enter second float: ");
	scanf("%lf", &double2); // Read input into double2
	product = doubleProduct(double1, double2);
	printf("product %4.2f * %4.2f = %4.2f\n", double1, double2, product);
	return(0);
	}
double doubleProduct(double a, double b) {
	return a * b;
}
