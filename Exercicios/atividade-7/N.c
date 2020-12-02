#include <stdio.h>

int main(){
    int i, j, par=0, matrizA[7][7];

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("%d - %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
            if (matrizA[i][j]%2==0){
                par++;
            }
        }
        
        
    }

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("| %.4d |", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("Essa matriz contem %d numeros pares", par);
    return 0;
}