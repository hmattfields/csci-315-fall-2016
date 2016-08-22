#include <cxxtest/TestSuite.h>
#include <limits.h>
#include <stdio.h>
#include "helloworld.hpp"


std::string exec(char* cmd) {
    FILE* pipe = popen(cmd, "r");
    if (!pipe) return "ERROR";
    char buffer[128];
    std::string result = "";
    while(!feof(pipe)) {
    if(fgets(buffer, 128, pipe) != NULL)
        result += buffer;
    }
    pclose(pipe);
    return result;
}

class MyTestSuite1 : public CxxTest::TestSuite {
    public:
        void testHelloWorld(void) {
            TS_ASSERT_EQUALS(getHelloMessage(), "Hello World!");
        }

};

