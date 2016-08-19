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
        void testOutput() {
            std::string result = exec((char*)"./helloworld 0");
            TS_ASSERT_EQUALS(result, "");
            result = exec((char*)"./helloworld 2");
            TS_ASSERT_EQUALS(result, "Hello World!\nHello World!\n");
        }
};

