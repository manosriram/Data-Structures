#ifndef CHK
#define CHK
#include "Base.hpp"

bool Check(const char *c) {
    int hashOne = jenkinHash(c);
    int hashTwo = murmur_32(c, strlen(c), 444);
    hashOne %= size_;
    hashTwo %= size_;
    
    return (bset[size_ - hashOne] && bset[size_ - hashTwo]);
}
#endif
