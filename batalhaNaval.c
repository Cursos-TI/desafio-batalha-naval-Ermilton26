#include <stdio.h>

int main() {
    
    char tabuleiro[10][10]; // Matriz para o tabuleiro (3 linhas, 3 colunas)
    
    
   // Inicializa o tabuleiro com espaços vazios
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }
    

    // Imprime o tabuleiro
    printf("  1 2 3 4 5 6 7 8 9 10 \n");
    printf("A ");
    for (int i = 0; i < 10; i++) {
        //printf(" ");
        for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j] =  '0');
        }
        printf("\n");
        if (i < 9) {
            //printf(" \n");
            printf("%c ", i + 1 + 'A');
        }
    }
    
    //printf("  1 2 3 \n");

    return 0;
}