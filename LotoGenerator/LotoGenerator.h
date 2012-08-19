/* 
 * File:   LotoGenerator.h
 * Author: lillydi
 *
 * Created on 26 de Novembro de 2011, 20:45
 */

#ifndef LOTOGENERATOR_H
#define	LOTOGENERATOR_H

#include"RandomGenerator.h"

class LotoGenerator : public RandomGenerator{
public:
    int* makeRandomList(int length){
        int* loto = new int[length];
        int i = 0;
        int j = 0;
        while(i < length){
                loto[i] = iRandom();
            for( j = 0; j< i;j++){
                if(loto[j] == loto[i])
                    break;
            }
            if(i == j)
                i++;
        }
        return loto;
    }

   LotoGenerator(): RandomGenerator(){}
};

#endif	/* LOTOGENERATOR_H */

