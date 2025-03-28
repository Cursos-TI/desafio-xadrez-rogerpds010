#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
   /* int t = 0, b = 0;
    
    while (t < 5)
    {
        printf("Direita\n");// Torre 5 casas a direita.
        t++;
    }
    do
    {
        printf("Cima,Direita\n");// Bispo 5 casas diagonais(cima,direita).
        b++;
    } while (b < 5);
    for ( int r = 0; r < 8; r++)
    {
        printf("Esquerda\n");// Rainha 8 casas a esquerda.
    }*/
    int c = 0,C;

    for (C = 0 ; C < 2; C++)
    {
        printf("Baixo\n");//Cavalo 2 casas para Baixo
        while (c < C)
        {
            printf("Esquerda\n");//Cavalo 1 casa a esquerda
            c++;
        }
        
        
    }
    return 0;
}
