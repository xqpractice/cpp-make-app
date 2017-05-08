#include "iostream"
#include "c.h"

C::C(const char* name)
{
  strcpy(m_name, name);
}

void C::showMessage()
{
  printf("%s\n", m_name);
}
