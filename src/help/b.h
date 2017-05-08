#ifndef _B_H_
#define _B_H_

#include <base.h>

class B : public Base
{
  char m_name[20];
public:
  B(const char* name);

public:
  virtual void showMessage();
};
#endif
