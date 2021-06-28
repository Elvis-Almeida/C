#include <stdio.h>

int main(){
    int i, par=0, matrizA[15];

    for (i = 0; i < 15; i++)
    {
        printf("%d da matriz A: ", i+1);
        scanf("%d", &matrizA[i]);
        if (matrizA[i]%2==0)
        {
            par++;
        }    
    }
    printf("Esaa matriz contem %d numeros par", par);
}