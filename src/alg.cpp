// Copyright 2022 NNTU-CS
#include "alg.h"
#include <cstdint>
#include <cmath>

bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i <= sqrt(value); i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}
uint64_t nPrime(uint64_t n) {
    uint64_t this_num = 2;
    uint64_t u = 0;
    while (1) {
        if (checkPrime(this_num) == 1) {
            u++;
        }
        if (u == n) {
            break;
        }
        ++this_num;
    }
    return this_num;
}
uint64_t nextPrime(uint64_t value) {
    uint64_t next_prime = 0;
    while (1) {
        value++;
        if (checkPrime(value)) {
            return value;
            break;
        }
    }
}
uint64_t sumPrime(uint64_t hbound) {
    uint64_t this_num = 2;
    uint64_t summ = 0;
    while (this_num < hbound) {
        if (checkPrime(this_num)) {
            summ += this_num;
            this_num++;
        } else {
            this_num++;
        }
    }
    return summ;
}
