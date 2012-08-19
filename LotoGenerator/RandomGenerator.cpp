#include"RandomGenerator.h"


RandomGenerator::RandomGenerator(){
    int x =time(NULL);
    initialize(x);

    rmin = 0;
    rmax = 1;
}
void RandomGenerator::initialize(double seed){
     srand(seed);
    ran = rand();
}
int RandomGenerator::iRandom(){
    int ir;
    ir = rmin + fRandom()*(rmax - rmin + 1);
    if(ir > rmax)
        ir = rmax;
    return ir;
}


double RandomGenerator::fRandom(){
    ran = rand();
    return fmod(ran*0.99*M_PI, 1);
}

void RandomGenerator::setInterval(int min, int max){
    rmin = min;
    rmax = max;
}
