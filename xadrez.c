#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Mestre - Movimentação das Peças


// Função recursiva para mover a torre para a direita
void recursivoTorre(int movimentos) {
    if (movimentos == 0)
    return;

    printf("Direita\n");
    recursivoTorre(movimentos - 1);
}


// Função recursiva para mover a Rainha para a esquerda
void recursivoRainha(int movimentos) {
    if (movimentos == 0)
    return;

    printf("Esquerda\n");
    recursivoRainha(movimentos - 1);
}

// Função recursiva e loop aninhado para o bispo
void recursivoBispo(int movimentos) {
    if (movimentos == 0)
    return;

    printf("Cima\n");
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }

    recursivoBispo(movimentos - 1);
}

// Loop Aninhado com break e continue - Cavalo
void recursivoCavalo() {
    printf("Movimentação do Cavalo:\n");

    int movimentosCima = 2;
    int movimentosDireita = 1;

    for (int i = 0; i < movimentosCima + movimentosDireita; i++) {
        if (i < movimentosCima) {
            printf("Cima\n");
            if (i == 0) continue;
        } else {
            for (int j = 0; j < movimentosDireita + 1; j++) {
                if (j >= movimentosDireita) break;
                printf("Direita\n");
            }
        }
    }

    printf("\n");
}


int main() {

    // Movimento de cada peça

    int Torre = 5;
    int Bispo = 5;
    int Rainha = 8;

    // Movimentação do Bispo

    printf("\nMovimentos do Bispo:\n");
    recursivoBispo(Bispo);
    printf("\n");
   

    // Movimentação da Torre

    printf("\nMovimentação da Torre:\n");
    recursivoTorre(Torre);
    printf("\n");

    
    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    recursivoRainha(Rainha);
    printf("\n");


    recursivoCavalo();


    return 0;
}
