#include <stdio.h>

int main(){
    int i, j, soma, ii, matrizA[15][15];

    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            printf("%d - %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
            if(i == j){
                if(matrizA[i][j]%2 == 0){    
                    soma=0;
                    for(ii = matrizA[i][j]; ii > 0; ii--)
                    {
                        soma += ii;     
                    }
                    matrizA[i][j] = soma;
                }
            }
        }
        
    }
    
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            printf("| %.4d |", matrizA[i][j]);
        }
        printf("\n");
    }

    return 0;
}