#include <stdint.h>
#include <cmath>
#include <time.h>
#include <iostream>
using namespace std;


int main(){

    clock_t start, stop; 
    double result1;

    time(&start);
    cout << "Start time: " << start << endl; 

    result1 = 0; 
    double adding = 100000000000;