#include <stdio.h>

int main(){
    int i, j, matrizA[4][5];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d - %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
        
    }
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("| %.4d |", matrizA[i][j]);
        }
        printf("\n");
    }

    return 0;
}