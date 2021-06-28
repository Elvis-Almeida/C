#include <stdio.h>

int main(){
    int i, j, matrizA[5][6], matrizB[5][6], matrizC[5][6];
        for (i = 0; i < 5; i++)
        {
            for(j = 0; j < 6; j++)
                {
                printf("%d da matriz A: ", i+1);
                scanf("%d", &matrizA[i][j]);
                while (matrizA[i][j]%2!=0)
                {
                    printf("Numero invalido, digite um numero par\n%d da matriz A: ", i+1);
                    scanf("%d", &matrizA[i][j]);
                }
            }
        }
        for (i = 0; i < 5; i++)
        {
            for(j = 0; j < 6; j++)
                {
                printf("%d da matriz B: ", i+1);
                scanf("%d", &matrizB[i][j]);
                while (matrizB[i][j]%2==0)
                {
                    printf("Numero invalido, digite um numero impar\n%d da matriz B: ", i+1);
                    scanf("%d", &matrizB[i][j]);
                }
            }        
        }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("| %.4d |", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}