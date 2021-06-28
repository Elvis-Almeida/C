#include <stdio.h>

int main(){
    int i;
    float matrizB[25], matrizA[25];
    for (i = 0; i < 25; i ++)
    {
        printf("%d - ", i+1);
        scanf("%f", &matrizA[i]);
    }
    for (i = 0; i < 25; i ++)
    {
        matrizB[i] = (matrizA[i] * 9/5)+ 32;
        printf("%.2f Graus Celsius em Fahrenheit = %.2f\n", matrizA[i], matrizB[i]);
    }
    
}