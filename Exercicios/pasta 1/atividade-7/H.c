#include <stdio.h>

int main(){
    int i, j, matrizA[5][5], matrizB[5][5];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d - %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
            matrizB[i][j] = matrizA[i][j] * 2;
            if(j == i){
                matrizB[i][j] = matrizA[i][j] * 3;
            }
        }
        
    }
    
    printf("\nMatriz A\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("| %.4d |", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz B\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("| %.4d |", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}