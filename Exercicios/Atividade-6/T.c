#include <stdio.h>
 
 int main(){
    int i, matrizA[10],matrizB[10],matrizC[20];

        for(i = 0; i < 10; i++){
            printf("%d da matriz A: ", i+1);
            scanf("%d", &matrizA[i]);
            while (matrizA[i]%2 != 0 || matrizA[i]%3 != 0)
            {
                printf("Numero invalido, digite um numero par\n%d da matriz A: ", i+1);
                scanf("%d", &matrizA[i]);
            }
        }
        for(i = 0; i < 10; i++){
            printf("%d da matriz B: ", i+1);
            scanf("%d", &matrizB[i]);
            while (matrizB[i]%5!=0)
            {
                printf("Numero invalido, digite um numero impar\n%d da matriz B: ", i+1);
                scanf("%d", &matrizB[i]);
            }
        }

        for (i = 0; i < 10; i++)
        {
            matrizC[i] = matrizA[i];
        }
        for (i = 10; i < 20; i++)
        {
            matrizC[i] = matrizB[i-10];
        }

        for (i = 0; i < 20; i++)
        {
            printf("%d-C = %d \n", i+1, matrizC[i]); 
        }

        return 0;
    }