#include <stdio.h>
 
 int main(){
    int i, matrizA[5],matrizB[5],matrizC[5], matrizD[15];

        for(i = 0; i < 5; i++){
            printf("%d da matriz A: ", i+1);
            scanf("%d", &matrizA[i]); 
        }
        for (i = 0; i < 5; i++)
        {
            printf("%d da matriz B: ", i+1);
            scanf("%d", &matrizB[i]); 
        }
        for (i = 0; i < 5; i++)
        {
            printf("%d da matriz B: ", i+1);
            scanf("%d", &matrizC[i]); 
        }


        for (i = 0; i < 5; i++)
        {
            matrizD[i] = matrizA[i];
        }
        for (i = 5; i < 10; i++)
        {
            matrizD[i] = matrizB[i-5];
        }
        for (i = 10; i < 15; i++)
        {
            matrizD[i] = matrizC[i-10];
        }

        for (i = 0; i < 15; i++)
        {
            printf("%d-D = %d \n", i+1, matrizD[i]); 
        }

        return 0;
    }