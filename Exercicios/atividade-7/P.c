#include <stdio.h>

int main(){
    int i, j, impar=0, par=0, matrizA[10][7];

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("%d - %d: ", i, j);
            scanf("%d", &matrizA[i][j]);
            if (matrizA[i][j]%2==0)
            {
                par++;
            }
            else
            {
                impar++;
            }
            
        }
        
    }

    printf("\nsao: %d numeros par, que correspondem a %.2f do total\n", par, (par*100.0/70));
    printf("sao: %d numeros impar, que correspondem a %.2f do total", impar, (impar*100.0/70));
    return 0;
}