//
// Created by Lenny Dou on 11/8/16.
//

#include <random>
#include <set>
#include "common.h"
#include <iostream>
#include <algorithm>

void common::getRandomData(int* const pdata, int length) {
    std::default_random_engine rng;
    std::uniform_int_distribution<int> dist(1, 10000);

    std::set<int> dataSet;
    while (dataSet.size() != length) {
        int num = dist(rng);
        dataSet.insert(num);
    }

    std::vector<int> vData(dataSet.begin(), dataSet.end());
    std::random_shuffle(vData.begin(), vData.end());

    for (int i = 0; i < length; ++i) {
        pdata[i] = vData[i];
    }
}

void common::getSortedData(int *const pdata, int length) {
    std::default_random_engine rng;
    std::uniform_int_distribution<int> dist(1, 10000);

    std::set<int> dataSet;
    while (dataSet.size() != length) {
        int num = dist(rng);
        dataSet.insert(num);
    }

    std::vector<int> vData(dataSet.begin(), dataSet.end());
    std::sort(vData.begin(), vData.end());

    for (int i = 0; i < length; ++i) {
        pdata[i] = vData[i];
    }
}

void common::print(const int *const data, int length) {
    if (data == nullptr || length <= 0) {
        return;
    }

    for (int i = 0; i < length; ++i) {
        std::cout << data[i] << " ";
    }

    std::cout << std::endl;
}
