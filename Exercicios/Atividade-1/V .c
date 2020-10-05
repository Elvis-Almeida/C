#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    int A, B, i,cont=1;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite o valor 1: ");
    scanf("%d", &A);
    printf("Digite o valor 2: ");
    scanf("%d", &B);

    //Processamento
    for (i = 0; i < B; i++)
    {
        cont = cont * A;
    }

    //saída
    printf("%d elevado a %d é %d\n", A, B, cont);
    system("pause");
}
    