#include <stdio.h>

// Função recursiva para o movimento da Torre (Direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha (Esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva e loops aninhados para o Bispo (Diagonais)
void moverBispo(int casas) {
    if (casas <= 0) return;
    
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < casas; j++) {
            if (i == j) {
                printf("Cima, Direita\n");
            }
        }
    }

    moverBispo(casas - 1);
}

// Função para mover o Cavalo com loops aninhados
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    // Loop externo para o movimento de duas casas para cima
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }

    // Loop interno para o movimento de uma casa para a direita
    int j = 0;
    while (j < 1) {
        printf("Direita\n");
        j++;
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    moverCavalo();

    return 0;
}