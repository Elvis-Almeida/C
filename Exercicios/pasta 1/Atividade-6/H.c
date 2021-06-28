#include <stdio.h>
 
 int main(){
    int i, j=0, matrizA[20],matrizB[20];

        for(i = 0; i < 20; i++){
            printf("%d da matriz A: ", i+1);
            scanf("%d", &matrizA[i]); 
        }
        for (i = 19; i >= 0 ; i--)
        {
            matrizB[i] = matrizA[j];
            j++;
        }
         for (i = 0; i < 20; i++)
        {
        printf("matriz A %d\nmatriz B %d\n\n",  matrizA[i], matrizB[i]); 
        }

    return 0;
 }