#include <stdio.h>

int main() {
    
    // variáveis de controle para os loops de cada peça
    int torre = 1;
    int bispo = 1; 
    int rainha = 1;

    // loop da torre
    printf(" * Movimento da torre:\n");

    while (torre <= 5) {
        printf("Direita.\n");
        torre++;
    }

    // loop do bispo
    printf(" * Movimento do bispo:\n");

    do {
        printf("Cima, direita.\n");
        bispo++;
    } while (bispo <= 5);



    // loop da rainha
    printf(" * Movimento da rainha:\n");

    for (rainha; rainha <= 8; rainha++) {
        printf("Esquerda.\n");
    }

    return 0;
}
