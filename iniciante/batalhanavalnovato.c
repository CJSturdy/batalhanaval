#include <stdio.h>

int main() {
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];  

    // Iniciando o tabuleiro tendo 0 como agua
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Alocando o navio na vertical definindo um "intervalo" em que ao inves de 0 "i" é 3 na coluna 8(j)
    for (int i = 5; i < 8; i++) {
        tabuleiro[i][8] = 3;
    }

    // Fazendo o mesmo da execução acima mas na horizontal com a diferença que o "i" representa em qual linha será alterado o 0 por 3
    for (int j = 2; j < 5; j++) {
        tabuleiro[1][j] = 3;
    }

    // dando espaçamento para as colunas ficarem alinhadas com os números
    printf("    ");
    for (int j = 0; j < 10; j++) {
        printf(" %c  ", colunas[j]);  
    }
    printf("\n");

    // Tabuleiro com linhas numeradas (índices 0-9 representam linhas 1-10)
    for (int i = 0; i < 10; i++) {
        printf("%2d  ", i+1);  // Número da linha com 2 dígitos
        for (int j = 0; j < 10; j++) {
            printf(" %d  ", tabuleiro[i][j]);  // impressão do tabuleiro e organização 
        }
        printf("\n");
    }

    return 0;
}