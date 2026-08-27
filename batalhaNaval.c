#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Declaração dos vetores para as linha e coluna
    char letras [10] = {'A' , 'B' , 'C' , 'D', 'E' , 'F', 'G' , 'H' , 'I', 'J' };
    int numeros [10] = {1, 2 ,3 , 4, 5, 6, 7, 8, 9, 10};

    // Declaração das matriz
    int tabuleiro [10] [10];

    // Vetores que representam os dois navios
    int navioHorizontal [3] = {3, 3, 3};
    int navioVertical [3] = {3, 3, 3,};

    // Inicializa o tabuleiro com 0 representando a água
    for ( int i = 0; i < 10; i++)
    {
        for ( int j = 0; j < 10; j++)
        {       
            tabuleiro [i][j] = 0;
        }
    }

    //==================================
    // POSICIONAMENTO O NAVIO HORIZONTAL
    //==================================

    // Coordenada inicial: c3
    int linhaHorizontal = 2;
    int colunaHorizontal = 2;

    for (int j = 0; j < 3; j++)
    {
        tabuleiro[linhaHorizontal] [colunaHorizontal + j] = navioHorizontal[j];
    }

    //=================================
    // POSICIONAMENTO O NAVIO VERTICAL
    //=================================

    // Coordenada inicil: G6
    int linhavertical = 5;
    int colunaVertical = 6;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro [linhavertical + i] [colunaVertical] = navioVertical[i]; 
    }


    printf ("\n=== TABULEIRO BATALHA NOVAL=== \n");

    // Exibe as letras da coluna
    printf ("   ");
    for ( int j = 0; j < 10; j++)
        {
            printf ("%c ", letras[j]);
        }
    printf ("\n");

    // Exibe os números das linhas e os valores do tabuleiro
    for (int i = 0; i < 10; i++)
    {
        printf ("%2d " , numeros[i]);
        
        for ( int j = 0; j < 10; j++)
        {
            printf ("%d ", tabuleiro[i][j]);
        }
        printf ("\n");
    }

    
    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
