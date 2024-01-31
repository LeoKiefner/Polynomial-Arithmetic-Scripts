#ifndef POLYNOME_H
#define POLYNOME_H

#include <stdint.h>

// Fonction qui retourne le degré du polynôme A (convention : degré du polynôme nul est -1)
int degree(uint32_t A);
void print_poly(uint32_t A);
uint32_t sum(uint32_t A, uint32_t B);
#endif // POLYNOME_H
