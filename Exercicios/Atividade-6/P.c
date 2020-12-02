#include <stdio.h>

int main(){
    int i, matrizB[12], matrizA[12];
    for (i = 0; i < 12; i ++)
    {
        printf("%d - ", i+1);
        scanf("%d", &matrizA[i]);
    }
    for (i = 0; i < 12; i ++)
    {
        if (matrizA[i]%2 != 0)
        {
            matrizB[i] = matrizA[i] * 2;
        }
        else
        {
            matrizB[i] = matrizA[i];
        }
        
        printf("matrizB %d: %d\n", i+1,matrizB[i]);
    }
    
}