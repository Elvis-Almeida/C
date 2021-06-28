#include <stdio.h>

int main(){
    int i, impar=0, matrizA[10];

    for (i = 0; i < 10; i++)
    {
        printf("%d da matriz A: ", i+1);
        scanf("%d", &matrizA[i]);
        if (matrizA[i]%2!=0)
        {
            impar++;
        }
           
    }
    printf("Essa matriz contem %.2f por centos impar e %d numeros impar", (10.0 * impar / 100)*100, impar);
}