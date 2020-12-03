#include <stdio.h>

int main(){
    int i, j, matrizA[5][5], matrizB[5][5], matrizC[5][5];
    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d da matriz A: ", i+1);
            scanf("%d", &matrizA[i][j]);
            while (matrizA[i][j]%3==0)
            {
                printf("Numero invalido, digite um numero não divisivel por 3 \n%d da matriz A: ", i+1);
                scanf("%d", &matrizA[i][j]);
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
            {
            printf("%d da matriz B: ", i+1);
            scanf("%d", &matrizB[i][j]);
            while (matrizB[i][j]%6==0)
            {
                printf("Numero invalido, digite um numero não divisivel por 6\n%d da matriz B: ", i+1);
                scanf("%d", &matrizB[i][j]);
            }
        }        
    }

    printf("C \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("| %.4d |", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}