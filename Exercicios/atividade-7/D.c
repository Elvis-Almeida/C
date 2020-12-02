#include <stdio.h>

int main(){
    int i, j, ii, tot, matrizA[10], matrizB[10][3];

    for (i = 0; i < 7; i++)
    {
        printf("matriz A %d: ", i);
        scanf("%d", &matrizA[i]); 
    }

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                matrizB[i][j] = matrizA[i] + 5;
            }
            if (j == 1)
            {
                tot=1;
                for (ii = matrizA[i]; ii > 0; ii--)//Processamento
                {
                    tot *= ii;
                }
                //printf("%d", tot);
                matrizB[i][j] = tot;
            }
            if(j == 2)
            {
                matrizB[i][j] = matrizA[i] * matrizA[i];
            } 
            printf("| %.4d |", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}