#include <stdio.h>

int main(){
    int i, matrizA[15];
    long int matrizB[15];

    for (i = 0; i < 15; i++)
    {
        scanf("%d", &matrizA[i]);
        matrizB[i] = matrizA[i] * matrizA[i];
    }
    
    for (i = 0; i < 15; i++)
    {
        printf("matriz A %d\nmatriz B %d\n\n",  matrizA[i], matrizB[i]); 
    }

    return 0;
}