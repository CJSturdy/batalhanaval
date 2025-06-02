#include <stdio.h>
int main(){

#define colunas 5
#define linhas 5


int matriz [linhas][colunas];

int soma;

for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        soma++;
        matriz [i][j] = soma;
        printf("%d ", matriz[i][j]);
    }
    printf(" \n ");
    
}