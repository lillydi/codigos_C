/*
 * File:   RandomGenerator.h
 * Author: lillydi_cacere
 *
 * Created on 19 de Novembro de 2011, 07:43
 */

#ifndef RANDOMGENERATOR_H
#define	RANDOMGENERATOR_H
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

class RandomGenerator
{
private:
    unsigned long  ran;
    int rmin;
    int rmax;

public:
    RandomGenerator(void);
    void initialize(double);
    double fRandom(void);
    int iRandom(void);
    void setInterval(int, int);

};



#endif	/* RANDOMGENERATOR_H */

