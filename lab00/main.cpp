#include <stdlib.h>
#include <iostream>
#include "helloworld.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "usage: " << argv[0] << " <num>\n";
        exit(1);
    }
    int num = atoi(argv[1]);

    for (int i = 1; i < num; i++) {
        cout << getHelloMessage() << "\n";
    }
}

