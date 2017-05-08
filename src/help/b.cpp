#include "iostream"
#include "b.h"

B::B(const char* name) : Base(name)
{
  strcpy(m_name, name);
}

void B::showMessage()
{
  Base::showMessage();
  printf("%s\n", "from sub class");
  printf("%s\n", m_name);
}
