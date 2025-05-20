#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Intermediario - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
// Implementação de Movimentação do Bispo
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
// Implementação de Movimentação da Torre
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
// Implementação de Movimentação da Rainha
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

int main() {

    // Movimento de cada peça

    int Torre = 5;
    int Bispo = 5;
    int Rainha = 8;
    int i;

    // Movimentação do Bispo com For

    printf("\nMovimentos do Bispo:\n");
    for (i = 1; i <= Bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimentação da Torre com While

    printf("\nMovimentação da Torre:\n");
    i = 1;
    while (i <= Torre) {
        printf("Direita\n");
        i++;
    }
    
    // Movimentação da Rainha com Do-While
    printf("\nMovimentação da Rainha:\n");
    i = 1;

    do {
        printf("Esquerda\n");
        i++;
    } while (i <= Rainha);

    // Movimentação do cavalo com loop aninhado
    printf("\nMovimentação do Cavalo:\n");

    const int movimentoVertical =2; //Baixo
    const int movimentosHorizontais =1; //Esquerda

    // Primeiro Loop
    for (i = 0; i < movimentoVertical; i++) {
        printf("Baixo");

        int controle = 0;
        while (controle < 0) {
            controle++;
        }
    }

    // Depois de mover duas casas par abaixo, mover uma para a esquerda
    int j = 0;
    while (j < movimentosHorizontais) {
        printf("Esquerda\n");
        j++;
    }
    


    return 0;
}
