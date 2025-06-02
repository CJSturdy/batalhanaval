#include <stdio.h>

#define linhas 5
#define coluna 5

int main() {
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];  
    //definindo os formatos nos quais deve ser impresso as habilidades no tabuleiro
    int matrizcone[3][5] = {{0,0,5,0,0},{0,5,5,5,0},{5,5,5,5,5}};
    int matrizcruz[5][5] = {{0,0,5,0,0},{0,0,5,0,0}, {5,5,5,5,5} ,{0,0,5,0,0},{0,0,5,0,0}};
    int matrizocta[5][5] = {{0,0,5,0,0},{0,5,5,5,0}, {5,5,5,5,5} ,{0,5,5,5,0},{0,0,5,0,0}};
    


    // Iniciando o tabuleiro tendo 0 como agua
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Alocando o navio na vertical definindo um "intervalo" em que ao inves de 0 "i" é 3 na coluna 8(j)
    for (int i = 2; i < 5; i++) {
        tabuleiro[i][9] = 3;
    }

    // Fazendo o mesmo da execução acima mas na horizontal com a diferença que o "i" representa em qual linha será alterado o 0 por 3
    for (int j = 5; j < 8; j++) {
        tabuleiro[4][j] = 3;
    }


    for (int j = 0; j < 3; j++)
    {
      tabuleiro[j][8-j] = 3;
    }
    
    for (int i = 0; i < 3; i++)
    {
      tabuleiro[i][i] = 3;
    }

for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            tabuleiro[5 + i][5+j] = matrizocta[i][j];
        }
        
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {

                tabuleiro[i][j]= matrizcone[i][j];
            
           
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            tabuleiro[4 + i][j] = matrizcruz[i][j];
        }
        
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