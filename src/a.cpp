#include "iostream"
#include "a.h"

A::A(const char* name) : B(name)
{
  strcpy(m_hello, "hello");
}

void A::showHello()
{
  printf("%s\n", m_hello);
}
