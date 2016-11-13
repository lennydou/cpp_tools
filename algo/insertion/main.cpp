#include <iostream>
#include "../tools/common.h"

using namespace std;

int main(int argc, char** argv) {
    const int c_length = 100;
    int data[c_length];
    common::getRandomData(data, c_length);
    common::print(data, c_length);

    // Start sort
    for (int i = 1; i < c_length; ++i) {
        int temp = data[i];
        int j = i;
        for (; j > 0; --j) {
            if (temp >=  data[j - 1]) {
                break;
            }

            data[j] = data[j - 1];
        }

        data[j] = temp;
    }

    common::print(data, c_length);

    return 1;
}
