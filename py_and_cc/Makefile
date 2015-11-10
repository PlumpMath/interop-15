#
# Make file for foo
#

all: foo.o
	g++ -shared -Wl,-soname,libfoo.so -o libfoo.so  foo.o
foo.o:
	g++ -c -fPIC foo.cc -o foo.o

.PHONY: clean
clean:
	@rm *.o *~ libfoo.so *.pyc
