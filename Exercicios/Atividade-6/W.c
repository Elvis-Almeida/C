#include <stdio.h>
 
 int main(){
    int i, matrizA[10],matrizB[10],matrizC[10];

        for(i = 0; i < 10; i++){
            printf("%d da matriz A: ", i+1);
            scanf("%d", &matrizA[i]); 
        }
        for (i = 0; i < 10; i++)
        {
            printf("%d da matriz B: ", i+1);
            scanf("%d", &matrizB[i]); 
        }
        for (i = 0; i < 10; i++)
        {
            matrizC[i] = (matrizA[i]+matrizB[i]) * (matrizA[i]+matrizB[i]);
            printf("matrizA %d, matrizB %d, matrizC %d\n", matrizA[i],matrizB[i],matrizC[i]);
        }
 }