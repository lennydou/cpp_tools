#include <iostream>
#include "../tools/common.h"

using namespace std;

int main(int argc, char** argv) {
    const int c_length = 100;
    int data[c_length];
    common::getRandomData(data, c_length);
    common::print(data, c_length);

    // Start sort
    int h = 1;
    while (h < c_length / 3) {
        h = h * 3 + 1;
    }

    while (h >= 1) {
        for (int i = h; i < c_length; ++i) {
            int temp = data[i];
            int j = i;
            for (; j > h; j -= h) {
                if (temp >= data[j - h]) {
                    break;
                }

                data[j] = data[j - h];
            }

            data[j] = temp;
        }

        h /= 3;
    }

    common::print(data, c_length);

    return 1;
}
