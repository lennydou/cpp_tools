#include <iostream>
#include "../tools/common.h"

using namespace std;

int main(int argc, char** argv) {
    const int c_length = 100;
    int data[c_length];
    common::getRandomData(data, c_length);
    common::print(data, c_length);

    // Start sort

    // End sort
    common::print(data, c_length);

    return 1;
}
