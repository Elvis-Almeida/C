#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    int A , B, C;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite o valor de A (inteiro): ");
    scanf("%d", &A);
    printf("Digite o valor de B (inteiro): ");
    scanf("%d", &B);

    printf("\nA variavel A é %d \nA variavel B é %d", A, B);

    //Processamento
    C = A;
    A = B;
    B = C;

    //saída
    printf("\n\nAgora\nA variavel A é %d \nA variavel B é %d\n", A, B);
    system("pause");
}
    