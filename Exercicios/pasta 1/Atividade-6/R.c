#include <stdio.h>

int main(){
    int i, j, matrizA[6],matrizB[6],matrizC[6],matrizD[6];

    for (i = 0; i < 6; i++)
    {
        printf("%d da matriz A: ", i+1);
        scanf("%d", &matrizA[i]); 
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d da matriz B: ", i+1);
        scanf("%d", &matrizB[i]); 
    }

    j = 0;
    for (i = 1; i < 6; i+=2)
    {
        matrizC[j] = matrizA[i];
        j++;  
    }
    j = 3;
    for (i = 1; i < 6; i+=2)
    {
        matrizC[j] = matrizB[i];
        j++;  
    }

    j = 0;
    for (i = 0; i < 6; i+=2)
    {
        matrizD[j] = matrizA[i];
        j++;  
    }
    j = 3;
    for (i = 0; i < 6; i+=2)
    {
        matrizD[j] = matrizB[i];
        j++;  
    }
    
    
    printf("---------------------");
    for (i = 0; i < 6; i++)
    {   
        printf("%d da matriz C: %d\n", i, matrizC[i]); 
    }
    printf("---------------------");
    for (i = 0; i < 6; i++)
    {   
        printf("%d da matriz D: %d\n", i, matrizD[i]);
    }
}