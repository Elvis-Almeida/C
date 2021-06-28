#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    int A, B, C;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite o valor 1: ");
    scanf("%d", &A);
    printf("Digite o valor 2: ");
    scanf("%d", &B);

    //Processamento
    C = (A-B)*(A-B);

    //saída
    printf("O quadrado da diferença entre o valor 1 e valor 2 é: %d\n", C);
    system("pause");
}
    