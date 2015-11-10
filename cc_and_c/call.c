#include "wrapper.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
  struct Foo* f = Foo_new();
  Foo_bar(f);
  return 0;
}
