#include <stdio.h>

int main(){
    int i; 
    float matrizB[12], matrizA[12];
    for (i = 0; i < 12; i ++)
    {
        printf("%d - ", i+1);
        scanf("%f", &matrizA[i]);
    }
    for (i = 0; i < 12; i ++)
    {
        if (i%2 != 0)
        {
            matrizB[i] = matrizA[i] * 1.0 / 2;
        }
        else
        {
            matrizB[i] = matrizA[i] * 1.5;
        }
        
        printf("matrizB %d: %f\n", i+1,matrizB[i]);
    }
    
}