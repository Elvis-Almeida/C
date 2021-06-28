#include <stdio.h>

int main(){
    int i, matrizA[8], matrizB[8];

    for (i = 0; i < 8; i++)
    {
        scanf("%d", &matrizA[i]); 
        matrizB[i] = matrizA[i]*3;
    }
    printf("---------------------\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d\n", matrizB[i]); 
    }

    return 0;
}