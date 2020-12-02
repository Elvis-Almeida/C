#include <stdio.h>

int main(){
    int i, num, matrizA[10];

    printf("digite um numero: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++)
    {
        matrizA[i] = num * (i+1);
        printf("%d * %d = %d\n", num, i+1, matrizA[i]);
    }
    
}