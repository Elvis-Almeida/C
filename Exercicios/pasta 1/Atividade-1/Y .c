#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    int numero;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &numero);

    //Processamento
    //saída
    printf("O antecessor de %d é %d e o sucessor é %d\n", numero, numero-1, numero+1);
    system("pause");
}
    