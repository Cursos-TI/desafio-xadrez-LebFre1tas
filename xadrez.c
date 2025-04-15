#include <stdio.h>

int main() {


    // variáveis de controle para os loops de cada peça
    int torre = 1;
    int bispo = 1; 
    int rainha;
    int cavalo = 1;

    // loop da torre
    printf(" * Movimento da torre:\n");

    while (torre <= 5) {
        printf("Direita.\n");
        torre++;
    }

    printf("\n");

    // loop do bispo
    printf(" * Movimento do bispo:\n");

    do {
        printf("Cima, direita.\n");
        bispo++;
    } while (bispo <= 5);

    printf("\n");

    // loop da rainha
    printf(" * Movimento da rainha:\n");

    for (rainha = 1; rainha <= 8; rainha++) {
        printf("Esquerda.\n");
    }

    printf("\n");

    // loop do cavalo
    printf(" * Movimento do cavalo:\n");

    while (cavalo--) {
        for(int i = 1; i <= 2; i++) {
            printf("Baixo.\n");
        }

        printf("Esquerda.\n");
    }


    return 0;

}