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
    soma = (A+B+C)*(A+B+C);

    //saída
    printf("O quadrados da soma dos valores são: %d\n", soma);
    system("pause");
}
    