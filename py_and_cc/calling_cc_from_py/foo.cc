#include <iostream>

class Foo{
public:
  void bar(){
    std::cout << "Hello world. calling c++ from python" << std::endl;
  }
};

extern "C" {
  Foo* Foo_new(){ return new Foo(); }
  void Foo_bar(Foo* foo){ foo->bar(); }
}

