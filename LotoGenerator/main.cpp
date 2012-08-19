/* 
 * File:   main.cpp
 * Author: lillydi
 *
 * Created on 26 de Novembro de 2011, 20:22
 */

#include <cstdlib>
#include<iostream>
#include"LotoGenerator.h"
using namespace std;

/*
 * 
 */
int main() {

    LotoGenerator a;
    a.setInterval(1, 60);
    int* b = a.makeRandomList(6);
    for(int i = 0; i < 6;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}

