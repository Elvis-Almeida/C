#include <stdio.h>

int main(){
    int i, j, tot, matrizA[8][6], matrizB[8];

    for (i = 0; i < 8; i++)
    {
        matrizB[i] = 0;
        for (j = 0; j < 6; j++)
        {
            printf("%d - %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
            matrizB[i] += matrizA[i][j];
        }
        
    }
    tot=0;
    for (i = 0; i < 8; i++)
    {
        tot += matrizB[i];
        printf("| %.4d |", matrizB[i]);
    }
    printf("\nO somatorio de matriz B: %d", tot);
    return 0;
}