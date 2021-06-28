#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    int A, B, C, soma;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite o valor 1: ");
    scanf("%d", &A);
    printf("Digite o valor 2: ");
    scanf("%d", &B);
    printf("Digite o valor 3: ");
    scanf("%d", &C);

    //Processamento
    soma = (A*A)+(B*B)+(C*C);

    //saída
    printf("A soma dos quadrados dos valores são: %d\n", soma);
    system("pause");
}
    