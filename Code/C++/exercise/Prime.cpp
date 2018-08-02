
#include "Prime.h"

Prime::Prime(int n)
{
  num = n;
}
Prime::~Prime() {

}
int 
Prime::runTask(void) {
	for (int i = 2; i <= num / 2; i++)
	{
	if (num % i == 0) {
		isPrime = false;
		break;
		}
	}
  
  return 0;
}
  
void 
Prime::Print(ostream &s) {
  if (isPrime )
	  cout << num <<" is is a prime number\n";
  else 
	  cout << num <<" is not a prime number\n";
}

