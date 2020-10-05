#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    int numeros[4], i, ii, cont1=0, cont2=0;
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    //Entrada de dados

    printf("Digite o valor da variavel A: ");
    scanf("%d", &numeros[0]);
    printf("Digite o valor da variavel B: ");
    scanf("%d", &numeros[1]);
    printf("Digite o valor da variavel C: ");
    scanf("%d", &numeros[2]);
    printf("Digite o valor da variavel D: ");
    scanf("%d", &numeros[3]);

    //printf("%d %d %d %d\n", numeros[0], numeros[1], numeros[2], numeros[3]);
    //Processamento
    cont2 = 0;
    for (ii = 0; ii < 4; ii++)
    {
        for (i = 0; i < 4; i++)
        {
            if (cont1 != cont2)
            {
                 if (cont1 < cont2)
                 { 
                    //saída
                    //printf("%d , %d", cont1,  cont2);
                    printf("\n%d + %d = %d", numeros[cont1], numeros[cont2], numeros[cont1] + numeros[cont2]);
                    printf("\n%d x %d = %d\n", numeros[cont1], numeros[cont2], numeros[cont1] * numeros[cont2]);
                    
                 }
                 
            }
            cont2++;
        }
    cont2 = 0;
    cont1++;
    }
    
    
    system("pause");
}
    