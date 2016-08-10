DEPS=helloworld.hpp
OBJS=helloworld.o
CFLAGS=-O2

%.o: %.cpp $(DEPS)
	g++ -c -o $@ $< $(CFLAGS)

all: $(OBJS) main.o
	g++ -o helloworld $(OBJS) main.o $(CFLAGS)

test: all
	cxxtestgen --runner=ErrorPrinter -o test-runner.cpp helloworld-test.cpp
	g++ test-runner.cpp $(OBJS) -o helloworld-test
	./helloworld-test

.PHONY: clean

clean:
	rm -rf *.o helloworld helloworld-test test-runner.cpp
	cd cov ; make cov-clean
