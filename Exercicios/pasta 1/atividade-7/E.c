#include <stdio.h>

int main(){
    int i, j, matrizA[7], matrizB[7], matrizC[7][2];

    for (i = 0; i < 7; i++)
    {
        printf("matriz A %d: ", i);
        scanf("%d", &matrizA[i]); 
    }
    for (i = 0; i < 7; i++)
    {
        printf("matriz B %d: ", i);
        scanf("%d", &matrizB[i]); 
    }
    
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                matrizC[i][j] = matrizA[i]*2;
            }
            else
            {
                matrizC[i][j] = matrizB[i]-5;
            } 
            printf("| %.3d |", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}