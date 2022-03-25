#include <iostream>
#include <cmath>
#include <unistd.h>
#include <cstdlib>

int32_t main(const int argc, const char** argv, const char** env){
    double res = 0.0f;
    for(double i = 1; ; ++i){
        if((int)i & 1){
            res += 1.0 / (2 * i - 1);
        }else{
            res += -1.0 / (2 * i - 1);
        }
        std::printf("\r%0.762lf", res * 4);
    }
    return EXIT_SUCCESS;
}
