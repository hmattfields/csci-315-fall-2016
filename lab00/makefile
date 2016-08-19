DEPS=helloworld.hpp
OBJS=helloworld.o
SRCS=src/helloworld.cpp
CFLAGS=-O2 -I src/

all:
	g++ -o helloworld $(CFLAGS) ${SRCS} src/main.cpp

unit-test: all
	cxxtestgen --runner=ErrorPrinter -o test/test-runner.cpp test/helloworld-unit-test.cpp ${SRCS}
	g++ ${CFLAGS} test/test-runner.cpp $(SRCS) -o test-runner
	./test-runner

cmd-test: all
	cxxtestgen --runner=ErrorPrinter -o test/test-runner.cpp test/helloworld-unit-test.cpp ${SRCS}
	g++ ${CFLAGS} test/test-runner.cpp $(SRCS) -o test-runner
	./test-runner

.PHONY: clean

clean:
	rm -rf *.o helloworld test/test-runner.cpp test-runner
	#cd cov ; make cov-clean
