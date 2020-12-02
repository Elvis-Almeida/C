#include <stdio.h>

int main(){
    int i, j, matrizA[6][5], matrizB[6][5];

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d - %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
            if(matrizA[i][j]%2 == 0){
                matrizB[i][j] = matrizA[i][j] + 5;
            }
            else
            {
                matrizB[i][j] = matrizA[i][j] - 4;
            }
            
        }
        
    }
    
    printf("\nMatriz A\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("| %.4d |", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz B\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("| %.4d |", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}