#include <stdio.h>
#include <stdint-gcc.h>
#include "algos.h"


int main() {
    uint32_t polyA = 0x0000000A00;
    uint32_t polyB = 0x00000000A0;

    int deg = degree(polyA);
    printf("Le degré du polynôme est %d.\n", deg);
    uint32_t sumres = sum(polyA, polyB);
    uint32_t prores = product(polyA, polyB);

    printf("A : ");
    print_poly(polyA);
    printf("\nB : ");
    print_poly(polyB);
    printf("\nSomme de A et B : ");
    print_poly(sumres);
    printf("\nProduit de A et B : ");
    print_poly(prores);
    return 0;
}
