#include "iostream"
#include "d.h"

D::D(const char* name)
{
  strcpy(m_name, name);
}

void D::showMessage()
{
  printf("%s\n", m_name);
}
