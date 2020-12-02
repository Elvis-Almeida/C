#include <stdio.h>

int main(){
    int i, j, ii, soma, matrizA[4][4];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d - %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
            if(i == j){
                soma=0;
                for(ii = matrizA[i][j]; ii > 0; ii--)
                {
                    soma += ii;     
                }
                matrizA[i][j] = soma;
            }
        }  
    }
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("| %.4d |", matrizA[i][j]);
        }
        printf("\n");
    }

    return 0;
}