#include <stdio.h>

int main(){
    int i, matrizA[10];
    float matrizB[10];

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &matrizA[i]); 
        matrizB[i] = matrizA[i]*1.0 / 2;
    }
    printf("---------------------\n");
    for (i = 0; i < 10; i++)
    {
        printf("matrizA %d, ", matrizA[i]); 
        printf("matrizB %.2f\n", matrizB[i]); 
    }

    return 0;
}