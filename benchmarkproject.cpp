#include <stdint.h>
#include <cmath>
#include <time.h>
#include <iostream>
using namespace std;

int main()

{
clock_t intTime;
    intTime = clock();
    //32-bit integer operation benchmark
    int32_t n = 0;
    int32_t m = 0;
    int32_t o = 0;         

    for(int64_t i = 0; i < 100000000000; i++)
    {
        n = 2 + 2;
    }
    for(int64_t j = 0; j < 50000000000; j++)
    {
        m = 2 * 2;
    }
    for(int64_t k = 0; k < 20000000000; k++)
    {
        o = 2 / 2;
    }
    intTime = clock() - intTime;
    double intTime_taken = ((double)intTime)/CLOCKS_PER_SEC;
    std::cout << intTime_taken << " seconds" << std::endl;

    clock_t floatTime;
    floatTime = clock();
    //32-bit float operation benchmark
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    for(int64_t a = 0; a < 100000000000; a++){
        x = 2.0 + 2.0;

}