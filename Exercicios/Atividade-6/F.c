 #include <stdio.h>
 
 int main(){
    int i, matrizA[15],matrizB[15],matrizC[30];

        for(i = 0; i < 15; i++){
            printf("%d da matriz A: ", i+1);
            scanf("%d", &matrizA[i]); 
        }
        for (i = 0; i < 15; i++)
        {
            printf("%d da matriz B: ", i+1);
            scanf("%d", &matrizB[i]); 
        }

        for (i = 0; i < 15; i++)
        {
            matrizC[i] = matrizA[i];
        }
        for (i = 15; i < 30; i++)
        {
            matrizC[i] = matrizB[i-15];
        }

        for (i = 0; i < 30; i++)
        {
            printf("%d-C = %d \n", i+1, matrizC[i]); 
        }

        return 0;
    }