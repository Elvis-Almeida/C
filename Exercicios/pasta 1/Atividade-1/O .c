#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    int A, B, C, D, P, S;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite o valor 1: ");
    scanf("%d", &A);
    printf("Digite o valor 2: ");
    scanf("%d", &B);
    printf("Digite o valor 3: ");
    scanf("%d", &C);
    printf("Digite o valor 4: ");
    scanf("%d", &D);

    //Processamento
    P = A * C;
    S = B + D;

    //saída
    printf("\n%d x %d = %d", A, C, P);
    printf("\n%d + %d = %d\n", B, D, S);
    system("pause");
}
    