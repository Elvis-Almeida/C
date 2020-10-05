#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float dollar, cotacao, real;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite a cotação do Dollar: ");
    scanf("%f", &cotacao);
    printf("Digite sua quantia em Reais: R$");
    scanf("%f", &real);

    //Processamento
    dollar = real / cotacao;

    //saída
    printf("\nSeu valor comvertido é: $%f\n", dollar);
    system("pause");
}