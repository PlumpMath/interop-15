/* #include "foo.h" */

/* extern "C" { */
/*   Foo* Foo_new(){ return new Foo(); } */
/*   void Foo_bar(Foo* foo){ foo->bar(); } */
/* } */

#ifdef __cplusplus
extern "C" {
#endif

  struct Foo;

  struct Foo *Foo_new();
  void Foo_bar(struct Foo *c);

#ifdef __cplusplus
} // extern "C"
#endif
