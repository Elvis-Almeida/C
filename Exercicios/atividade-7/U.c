#include <stdio.h>

int main(){
    int i, j, matrizA[4][5], matrizB[4][5], matrizC[4][5];
    for (i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d da matriz A: ", i+1);
            scanf("%d", &matrizA[i][j]);
            while (matrizA[i][j]%3!=0 && matrizA[i][j]%4!=0)
            {
                printf("Numero invalido, digite um numero divisivel por 3 ou 4\n%d da matriz A: ", i+1);
                scanf("%d", &matrizA[i][j]);
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
            {
            printf("%d da matriz B: ", i+1);
            scanf("%d", &matrizB[i][j]);
            while (matrizB[i][j]%5!=0 || matrizB[i][j]%6!=0)
            {
                printf("Numero invalido, digite um numero divisivel por 5 e 6\n%d da matriz B: ", i+1);
                scanf("%d", &matrizB[i][j]);
            }
        }        
    }

    printf("C \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matrizC[i][j] = matrizA[i][j] * matrizB[i][j];
            printf("| %.4d |", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}