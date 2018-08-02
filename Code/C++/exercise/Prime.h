#ifndef _PRIME
#define _PRIME

#include "Task.h"

class Prime :public Task {
 public:
  Prime(int a);
  ~Prime();
  int runTask(void);
  
  void Print(ostream &s);

 private:
  int num;
  bool isPrime = true;
};

#endif
