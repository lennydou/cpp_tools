//
// Created by Lenny Dou on 11/8/16.
//

#ifndef ALGO_COMMON_H
#define ALGO_COMMON_H

#include <vector>

class common {
public:
    static void getRandomData(int* const pdata, int length);

    static void getSortedData(int* const pdata, int length);

    static void print(const int *const data, int length);
};


#endif //ALGO_COMMON_H
