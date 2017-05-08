#ifndef _A_H_
#define _A_H_

#include "help/b.h"

class A : public B
{
  char m_hello[20];
public:
  A(const char* name);
  void showHello();
};
#endif
