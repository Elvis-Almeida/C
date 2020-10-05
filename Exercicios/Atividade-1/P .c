#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float salario, ajuste, salario_final;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("digite seu salario: R$");
    scanf("%f", &salario);
    printf("digite seu percentual de reajuste: ");
    scanf("%f", &ajuste);

    //Processamento
    salario_final = salario + (salario*(ajuste/100));

    //saída
    printf("Seu salario reajustado é: R$%f\n", salario_final);
    system("pause");
}
    