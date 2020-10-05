#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    int A;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite algum numero inteiro: ");
    scanf("%d", &A);

    //Processamento
    A = A*A;

    //saída
    printf("Seu valor elevado ao quadrado é: %d\n", A);
    system("pause");
}
    