// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    bool flag = true;
    for (uint64_t i = 2; i < (value / 2 + 1); ++i) {
        if (value % i == 0) {
            flag = false;
        }
    }
    return flag;
}

uint64_t nPrime(uint64_t n) {
    bool flag;
    uint64_t k = 0;
    uint64_t number;
    for (uint64_t i = 2; i <= 999999999; ++i) {
        flag = true;
        for (uint64_t j = 2; j <= i/2; ++j) {
            if (i % j == 0) {
                flag = false;
            }
        }
        if (flag) {
            k += 1;
            number = i;
        }
        if (k == n) {
            return number;
        }
    }
  return 0;
}

uint64_t nextPrime(uint64_t value) {
for (uint64_t i = value + 1; i <= value + 9999999; ++i) {
        bool flag = true;
        for (uint64_t j = 2; j <= i/2; ++j) {
            if (i % j == 0) {
                flag = false;
            }
        }
        if (flag) {
            return i;
        } 
    }
  return 0;
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; ++i) {
        bool flag = true;
        for (uint64_t j=2; j <= i/2; ++j) {
            if (i % j == 0) {
                flag = false;
            }
        }
        if (flag) {
           sum+=i;
        }
    }
    return sum;
}
