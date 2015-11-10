#include "wrapper.h"
#include "foo.h"

extern "C" Foo *Foo_new() { return new Foo(); }

extern "C"
void Foo_bar(Foo *c) {
  c->bar();
}
