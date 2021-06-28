#include <stdio.h>

int main(){
    int i, j, matrizA[5][3], matrizB[5][3], matrizC[5][3];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Matriz A %d - %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
        
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Matriz B %d - %d: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
        
    }
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("| %d |", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}