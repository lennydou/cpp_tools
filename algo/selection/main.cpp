#include <iostream>
#include "../tools/common.h"

using namespace std;

int main(int argc, char** argv) {
    const int c_length = 10;
    int data[c_length];
    common::getRandomData(data, c_length);
    common::print(data, c_length);

    // Start sort
    for (int i = 0; i < c_length - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < c_length; ++j) {
            if (data[j] < data[min]) {
                min = j;
            }
        }

        swap(data[i], data[min]);
    }

    common::print(data, c_length);

    return 1;
}
