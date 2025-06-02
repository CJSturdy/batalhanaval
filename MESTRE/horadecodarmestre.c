#include <stdio.h>


#define linha 10
#define coluna 10


int main(){





//int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//int pares = 0, impar = 0;

//for (int i = 0; i < 3; i++)
//{
    //for (int j = 0; j < 3; j++)
   // {
       // if (matriz[i][j ] % 2 == 0)
        //{
            //pares++;
        //}else
        //{
           // impar++;
        //}
               
    //}

//}
      //  printf("numero de pares %d\n", pares);
       // printf("numero de impares %d\n", impar);



//int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//for (int i = 0; i < 3; i++)
//{
   // for (int j = 0; j < 3; j++){

    //    if (matriz[i][j] % 3 == 0)
    //    {
    //        matriz[i][j]= -1; 
    //    }
    //    printf("%d \n", matriz[i][j]);
    //}
    //}


int matriz[linha][coluna];
int target = 5;
int found = 0;
int soma = 1;

        for (int i = 0; i < linha; i++)
        {
            for (int j = 0; j < coluna; j++){
                matriz[i][j] = soma;
                soma++;
                printf("%2d ", matriz[i][j]);
            }
            printf("\n");
        }
    

        for (int i = 0; i < linha; i++)
        {
            for (int j = 0; j < coluna; j++)
            {
                if (matriz[i][j] == target)
                {
                    printf("Na matriz a posição %d foi encontrada em: %d x %d", target, i, j);
                    found = 1;
                    break;
                }
                if (found) break;
            }
            if (!found)
            {
                printf("elemento %d não encontrado", target);
            }
            
        }
    }