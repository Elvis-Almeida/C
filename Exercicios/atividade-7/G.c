#include <stdio.h>

int main(){
    int i, j, matrizA[4][5], matrizB[4][5];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("valor em celcius %d - %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
            matrizB[i][j] = (matrizA[i][j] * 9/5)+ 32;
        }
        
    }
    
    printf("Matriz A\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("| %.4d |", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("Matriz B em fahrenheit \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("| %.4d |", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}