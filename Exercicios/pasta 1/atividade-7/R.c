#include <stdio.h>

int main(){
    int i, j, k, tot, matrizA[4], matrizB[4], matrizC[4],matrizD[4],matrizE[4][4];

    for (i = 0; i < 4; i++)
    { 
        printf("A - %d: ", i);
        scanf("%d", &matrizA[i]); 
    }
    for (i = 0; i < 4; i++)
    { 
        printf("B - %d: ", i);
        scanf("%d", &matrizB[i]); 
    }
    for (i = 0; i < 4; i++)
    { 
        printf("C - %d: ", i);
        scanf("%d", &matrizC[i]); 
    }
    for (i = 0; i < 4; i++)
    { 
        printf("D - %d: ", i);
        scanf("%d", &matrizD[i]); 
    }
    
    for(i=0;i<4;i++){
        printf("%d\n", i);
        for (j = 0; j < 4; j++)
        {
            
            if (i == 0)
            {
                matrizE[i][j] = matrizA[j]*2; 
            }
            if (i == 1)
            {
                matrizE[i][j] = matrizB[j]*3;
                printf("%d", matrizE[i][j]);
            }
            if (i ==2)
            {
                matrizE[i][j] = matrizC[j]*4;
            }
            if (i == 3)
            {
                tot=1;
                for (k = matrizD[i]; k > 0; k--)
                {
                    tot *= k;
                }
                matrizE[i][j] = tot;
            }
            printf("fecho\n");
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("| %.4d |", matrizE[i][j]);
        }
        printf("\n");
    }return 0;
}
    