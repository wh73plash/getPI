#include <iostream>
#include <cmath>
#include <unistd.h>
#include <cstdlib>

#include "main.h"

inline std::string tostring_(long double a){
    char buffer[256];
    std::sprintf(buffer, "%0.60Lf", a);
    return buffer;
}

int32_t main(const int argc, const char** argv, const char** env){
    long double res = 0.0f;
    int cnt = 0;
    for(unsigned long long int i = 1; ; ++i){
        res += (i & 1 ? 1.0 : -1.0) / (2 * (long double)i - 1);
        //if((int)i % 1000000000 == 0){
            TraceManager::AddLog(tostring_(res * 4));
        //}
    }
    return EXIT_SUCCESS;
}
