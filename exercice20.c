#include <stdio.h>
#include <stdint-gcc.h>
#include "exercice20.h"

int degree(uint32_t A){
    int deg = 0;

    if(A == 0){
        deg -1;
    }

    else{
        while(A>>=1){
            deg++;
        }
    }
    return deg;
}

void print_poly(uint32_t A) {
    int deg = degree(A);
    if (deg == -1) {
        printf("0\n");
        return;
    }

    for (int i = deg; i >= 0; i--) {
        if(A>>i == 1) {
            if ((A >> i) & 1) {
                printf("X^%d", i);
            }
        }
        else if ((A >> i) & 1) {
            printf(" + X^%d", i);
        }
    }
    printf("\n");
}

uint32_t sum(uint32_t A, uint32_t B) {
    return A ^ B;
}
