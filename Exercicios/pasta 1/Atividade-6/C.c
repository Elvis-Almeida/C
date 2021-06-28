#include <stdio.h>

int main(){
    int i, matrizA[20],matrizB[20],matrizC[20];

    for (i = 0; i < 20; i++)
    {
        printf("%d da matriz A: ", i+1);
        scanf("%d", &matrizA[i]); 
    }
    for (i = 0; i < 20; i++)
    {
        printf("%d da matriz B: ", i+1);
        scanf("%d", &matrizB[i]); 
    }
    for (i = 0; i < 20; i++)
    {
        matrizC[i] = matrizA[i] - matrizB[i];
    }

    for (i = 0; i < 20; i++)
    {
        printf("%d - %d = %d \n", matrizA[i], matrizB[i], matrizC[i]); 
    }

    return 0;
}