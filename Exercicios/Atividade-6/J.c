#include <stdio.h>

int main(){
    int i, ii, matrizA[20], matrizB[20];
    for (i = 0; i < 20; i++)
    {
        printf("%d da matriz A: ", i+1);
        scanf("%d", &matrizA[i]); 
    }

    for(i=0; i < 20; i++){
        matrizB[i] = 0;
        for (ii = matrizA[i]; ii > 0; ii--)
        {
            printf("%d", ii);
            matrizB[i] += ii;
            if (ii != 1)
            {
                printf(" + ");
            }
        }
        printf(" = %d", matrizB[i]);
        printf("\n");
    }
    printf("\n");
}