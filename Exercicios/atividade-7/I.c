#include <stdio.h>

int main(){
    int i, j, ii, tot, soma, matrizA[7][7], matrizB[7][7];

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("%d - %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
           
            if(j == i){
                tot=1;
                for (ii = matrizA[i][j]; ii > 0; ii--)
                {
                    tot *= ii;
                }
                matrizB[i][j] = tot;
            }
            else
            {   
                soma=0;
                for(ii = matrizA[i][j]; ii > 0; ii--)
                {
                    soma += ii;     
                }
                matrizB[i][j] = soma;
            }  
        }  
    }
    
    printf("\nMatriz A\n");
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("| %.4d |", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz B\n");
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("| %.4d |", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}