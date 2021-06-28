#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float A, B;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite o valor 1: ");
    scanf("%f", &A);
    printf("Digite o valor 2: ");
    scanf("%f", &B);

    //Processamento
    //saída
    printf("%f + %f = %f\n", A, B, B + A);
    printf("%f - %f = %f\n", A, B, A - B);
    printf("%f x %f = %f\n", A, B, B * A);
    printf("%f / %f = %f\n", A, B, A / B);
    system("pause");
}
    