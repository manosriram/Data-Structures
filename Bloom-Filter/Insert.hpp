#ifndef INS_WR
#define INS_WR
#include "Base.hpp"

bitset<32> Insert(const char *c) {
    int sz = strlen(c);


    int hashOne = jenkinHash(c);
    int hashTwo = murmur_32(c, sz, 444);

    hashOne %= size_;
    hashTwo %= size_;

    bset |= (1 << (size_ - hashOne));
    bset |= (1 << (size_ - hashTwo));

    return bset;
}

#endif
