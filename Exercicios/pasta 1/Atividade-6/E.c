#include <stdio.h>

int main(){
    int i, ii, matrizA[15], matrizB[15];
    for (i = 0; i < 15; i++)
    {
        printf("%d da matriz A: ", i+1);
        scanf("%d", &matrizA[i]); 
    }

    for(i=0; i < 15; i++){
        matrizB[i] = 1;
        for (ii = matrizA[i]; ii > 0; ii--)
        {
            printf("%d", ii);
            matrizB[i] *= ii;
            if (ii != 1)
            {
                printf(" x ");
            }
        }
        printf(" = %d", matrizB[i]);
        printf("\n");
    }
    printf("\n");
}