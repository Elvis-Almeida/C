#include <stdio.h>

int main(){
    int i, par=0, impar=0, matrizA[30];

    for (i = 0; i < 30; i++)
    {
        printf("%d da matriz A: ", i+1);
        scanf("%d", &matrizA[i]);
        if (matrizA[i]%2==0)
        {
            par++;
        }
        else
        {
            impar++;
        }
           
    }
    printf("Essa matriz contem %d impar e %d par", impar, par);
}