#include <stdio.h>
 
 int main(){
    int i, matrizA[20],matrizB[30],matrizC[50];

        for(i = 0; i < 20; i++){
            printf("%d da matriz A: ", i+1);
            scanf("%d", &matrizA[i]); 
        }
        for (i = 0; i < 30; i++)
        {
            printf("%d da matriz B: ", i+1);
            scanf("%d", &matrizB[i]); 
        }

        for (i = 0; i < 20; i++)
        {
            matrizC[i] = matrizA[i];
        }
        for (i = 20; i < 50; i++)
        {
            matrizC[i] = matrizB[i-20];
        }

        for (i = 0; i < 50; i++)
        {
            printf("%d-C = %d \n", i+1, matrizC[i]); 
        }

        return 0;
    }