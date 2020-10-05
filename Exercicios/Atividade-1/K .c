#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float dollar, cotacao, real;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite a cotação do Dollar: ");
    scanf("%f", &cotacao);
    printf("Digite sua quantia em Dollar: $");
    scanf("%f", &dollar);

    //Processamento
    real = dollar * cotacao;

    //saída
    printf("\nSeu valor comvertido é: R$%f\n", real);
    system("pause");
}
    