#include <stdio.h>

int main(){

// int numeros[4] = {1, 2, 3, 4};

// printf("%d", numeros[3]);






int index;

char * nomes [3] [3] ={
    {"Aluno 0", "Port: 40", "Mat: 70"},
    {"Aluno 1", "Port: 70", "Mat: 40"},
    {"Aluno 1", "Port: 100", "Mat:90"}
};

printf("Digite o número do Aluno que você quer saber as notas. \n");
scanf("%d", &index);

printf("O selecionado foi %s e as notas são: %s e %s\n", nomes[index][0], nomes[index][1], nomes[index][2]);



}