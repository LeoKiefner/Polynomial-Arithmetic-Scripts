#include <stdio.h>
#include <stdint-gcc.h>
#include "algos.h"

//Fonction retournant le degré du polynôme A, avec la convention que le degré du polynôme nul est -1
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

//Fonction d’affichage des polynômes selon les puissances décroissantes.
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

//Fonction réalisant la somme des polynômes A et B.
uint32_t sum(uint32_t A, uint32_t B) {
    return A ^ B;
}

//Fonction réalisant le produit des polynômes A et B.
uint32_t product(uint32_t A, uint32_t B) {
    uint32_t result = 0;

    for (int i = 0; i < 32; i++) {
        if (A & (1 << i)) { // Vérifie si le i-ème bit de A est 1
            result ^= (B << i); // Décale B de i positions vers la gauche et ajoute-le à result
        }
    }

    if (degree(result) > 31) {
        printf("Avertissement : Le degré du produit dépasse 31. Le résultat est tronqué.\n");
        result &= 0xFFFFFFFF; // Tronque le résultat au degré 31
    }

    return result;
}

div_result euclidian_div ( uint32_t A , uint32_t B );
