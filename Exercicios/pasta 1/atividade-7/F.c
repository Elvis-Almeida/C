#include <stdio.h>

int main(){
    int i, j, matrizA[5][4], matrizB[5][4], tot, ii;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d - %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
            tot=1;
            for (ii = matrizA[i][j]; ii > 0; ii--)//Processamento
            {
                tot *= ii;
            }
            //printf("%d", tot);
            matrizB[i][j] = tot;
        }
        
    }
    printf("Matriz A\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("| %.4d |", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("Matriz B\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("| %.4d |", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}