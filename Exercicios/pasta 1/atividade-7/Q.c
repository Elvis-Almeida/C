#include <stdio.h>

int main(){
    int i, j, soma, matrizA[4][5], matrizB[4], matrizC[5];
    
    matrizC[0]=0;
    matrizC[1]=0;
    matrizC[2]=0;
    matrizC[3]=0;
    matrizC[4]=0;

    for (i = 0; i < 4; i++)
    {
        matrizB[i] = 0;
        for (j = 0; j < 5; j++)
        {
            printf("%d - %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
            matrizB[i] += matrizA[i][j];
            if (j==0)
                {
                    //printf("%d A %d C J-%d\n", matrizA[i][j], matrizC[j], j);
                    //printf("%d\n", matrizC[j] + matrizA[i][j]);
                    matrizC[j] = matrizC[j] + matrizA[i][j];
                    //printf("%d\n", matrizC[j] + matrizA[i][j]);
                    //printf("%d A %d C J-%d\n", matrizA[i][j], matrizC[j], j);
                }
                else if (j==1)
                {
                    matrizC[j] += matrizA[i][j];
                    //printf("%d A %d C J-1\n", matrizA[i][j], matrizC[j], j);
                }
                else if (j==2)
                {
                    matrizC[j] += matrizA[i][j];
                    //printf("%d A %d C J-2\n", matrizA[i][j], matrizC[j], j);
                }
                else if (j==3)
                {
                    matrizC[j] += matrizA[i][j];
                    //printf("%d A %d C J-3\n", matrizA[i][j], matrizC[j], j);
                }
                else if (j==4)
                {
                    matrizC[j] += matrizA[i][j];
                    //printf("%d A %d C J-4\n", matrizA[i][j], matrizC[j], j);
                }
        }
        
    }


    printf("\nMatriz A\n");
    for (i = 0; i < 4; i++)
    {   
        for(j=0;j<5;j++){
            printf("| %.4d |", matrizA[i][j]);
            
        }
        printf("\n");
    }
    soma = 0;
    printf("\nMatriz B\n");
    for (i = 0; i < 4; i++)
    {   
        printf("| %.4d |", matrizB[i]);
        printf("\n");
        soma += matrizB[i];
    }
    printf("\nMatriz A soma: %d\n", soma);

    soma = 0;
    printf("\nMatriz C\n");
    for (i = 0; i < 5; i++)
    {   
        printf("| %.4d |", matrizC[i]);
        printf("\n");
        soma += matrizC[i];
    }
    printf("\nMatriz B soma: %d\n", soma);

    return 0;
}