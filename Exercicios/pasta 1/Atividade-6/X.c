#include <stdio.h>
 
 int main(){
    int i,j, matrizA[6],matrizB[6];

        for(i = 0; i < 6; i++){
            printf("%d da matriz A: ", i+1);
            scanf("%d", &matrizA[i]); 
        }
        j=1;
        for (i = 0; i < 6; i+=2)
        {
            matrizB[i] = matrizA[j];
            j+=2;
        }
        j=0;
        for (i = 1; i < 6; i+=2)
        {
            matrizB[i] = matrizA[j];
            j+=2;
        }
        for (i = 0; i < 6; i++)
        {
            printf("%d-B: %d  %d-A: %d\n", i, matrizB[i], i, matrizA[i]);
        }
 }