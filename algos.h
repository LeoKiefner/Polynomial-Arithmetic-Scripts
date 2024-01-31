#ifndef POLYNOME_H
#define POLYNOME_H

#include <stdint.h>

typedef struct{
    uint32_t quotient;
    uint32_t remainder;
}div_result;


// Fonction qui retourne le degré du polynôme A (convention : degré du polynôme nul est -1)
int degree(uint32_t A);
void print_poly(uint32_t A);
uint32_t sum(uint32_t A, uint32_t B);
uint32_t product ( uint32_t A , uint32_t B );
div_result euclidian_div ( uint32_t A , uint32_t B );


#endif // POLYNOME_H
