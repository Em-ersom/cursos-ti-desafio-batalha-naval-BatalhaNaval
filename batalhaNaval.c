#include <stdio.h>

/** DESAFIO: BATALHA NAVAL **/

int main() {
    // Definindo o tamanho 10x10 e o navio com 3 espaços
    #define TAM 10
    #define NAVIO 3

    // Tabuleiro
    int tabuleiro[TAM][TAM];

    // Aqui eu uso dois "fors" para encher tudo de zero (que é a água)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // navio (horizontal)
    // Escolhi a linha 2 e ele começa na coluna 3
    int linhaH = 2;
    int colunaH = 3;
    
    // Esse loop coloca o número 3 em 3 quadradinhos seguidos na mesma linha
    for (int j = 0; j < NAVIO; j++) {
        tabuleiro[linhaH][colunaH + j] = 3;
    }

    // navio (vertical)
    // Ele começa na linha 5 e fica todo na coluna 8
    int linhaV = 5;
    int colunaV = 8;

    // Esse loop aumenta a linha mas mantém a coluna igual
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // Hora de mostrar o resultado no console!
    printf("---  BATALHA NAVAL ---\n\n");
    
    // Só um enfeitinho para numerar as colunas lá em cima
    printf("    0 1 2 3 4 5 6 7 8 9\n");

    // Varrendo a matriz de novo, mas agora para imprimir os valores
    for (int i = 0; i < TAM; i++) {
        printf("%d | ", i); // Imprime o número da linha no começo
        
        for (int j = 0; j < TAM; j++) {
            // Imprime o que tem na célula e um espaço para não ficar tudo grudado
            printf("%d ", tabuleiro[i][j]);
        }
        
        // Quando termina uma linha, pula para a de baixo
        printf("\n");
    }

    printf("\nProntinho! Onde tem 3 e o navio e onde tem 0 e agua.\n");

    return 0;
}
