#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//int main(){}
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


    void movertorre (int torre){
        if (torre > 0)
        {
            printf("Direita\n");
            movertorre(torre - 1);
        }
    }
    
    void moverrainha (int rainha){
        if (rainha > 0)
        {
            printf("Esquerda\n");
            moverrainha(rainha - 1);
        }
        
    }
    void moverBispo(int movimentos) {
        if (movimentos <= 0) return; // Caso base da recursão

        printf("Esquerda");

        for (int B = 0; B < 1; B++) { // Loop interno para imprimir "Cima" uma vez
        printf(",Cima");
        }

        printf("\n"); // Quebra de linha

        moverBispo(movimentos - 1); // Chamada recursiva para continuar os movimentos
    }   
    int main(){

    movertorre(5); // Torre 5 casas a direita.   
    moverrainha(8); // Rainha 8 casas a esquerda. 
    int movimentos = 5; // Quantidade de movimentos desejados.
    moverBispo(movimentos); //Bispo 5 casas diagonais(direita,cima).
    int C, c; // Declaração das variáveis
    //Cavalo duas casas para cima e uma para a direita.
    for (C = 0; C < 2; C++)
    {
        printf("Cima\n");//Cavalo duas casas para Cima.
    
    for (c = 0; c < C; c++)
    {
        printf("Direita\n");//Cavalo uma casa a Direita.
    }
    }
    return 0;
    }
