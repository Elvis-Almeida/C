#include <stdio.h>

int main(){
    int i, matrizA[10], matrizB[10];

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &matrizA[i]); 
        matrizB[i] = matrizA[i] * -1;
    }
    printf("---------------------\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", matrizB[i]); 
    }

    return 0;
}