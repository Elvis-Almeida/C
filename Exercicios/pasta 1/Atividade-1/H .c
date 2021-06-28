#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    int volume, largura, altura, comprimento;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("\nDigite a altura: ");
    scanf("%d", &altura);
    printf("Digite o comprimento: ");
    scanf("%d", &comprimento); 
    printf("Digite a largura: ");
    scanf("%d", &largura);

    //Processamento
    volume = comprimento * altura * largura;

    //saída
    printf("\nO volume de seu objeto é : %d\n", volume);
    system("pause");
}
    