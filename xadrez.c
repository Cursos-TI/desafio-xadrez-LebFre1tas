#include <stdio.h>

void movimentoTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movimentoTorre(casas - 1);
    }
}

void movimentoBispo(int casas2) {
    if (casas2 > 0) {
        printf("Cima, direita\n");
        movimentoBispo(casas2 - 1);
    }
}

void movimentoRainha(int casas3) {
    if (casas3 > 0) {
        printf("Esquerda\n");
        movimentoRainha(casas3 - 1);
    }
}

int main() {

    // loop da torre
    printf(" * Movimento da torre:\n");

    movimentoTorre(5);
    
    printf("\n");

    // loops do bispo
    printf(" * Movimento do bispo com recursividade:\n");

    movimentoBispo(5);

    printf("\n");


    printf(" * Movimento do bispo com loops aninhados:\n");

    for(int bispoVertical = 1; bispoVertical <= 5; bispoVertical++) {
        printf("Cima, ");
        for(int bispoHorizontal = 1; bispoHorizontal <= 1; bispoHorizontal++) {
            printf("Direita\n");
        }
    }

    printf("\n");

    // loop da rainha
    printf(" * Movimento da rainha:\n");

    movimentoRainha(8);

    printf("\n");

    // loop do cavalo
    int cavalo = 1;

    printf(" * Movimento do cavalo:\n");

    while (cavalo--) {
        for(int i = 1; i >= 1 && i <= 2; i++) {
            printf("Cima\n");
        }

        printf("Direita\n");
    }

    
    return 0;

}