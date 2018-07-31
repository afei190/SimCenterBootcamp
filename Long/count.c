#include <stdio.h>

int main(int argc, const char**argv){
	char c;
	int nDigit = 0, nWhite = 0, nOther = 0;
	while((c = getchar()) != EOF) {
		// EOF doesn't seem to work here
		switch(c){
		case ' ':
			nWhite++;
		case '\n':
			nOther++;
		case '\t':
			nOther++;
		default:
			nDigit++;
		}
	}
	printf ("nDigit = %d, nWhite = %d, nOther = %d", nDigit, nWhite, nOther);
	return nDigit;
}
