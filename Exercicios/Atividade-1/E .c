#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float Valor, Preco, Taxa, Tempo;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("\nDigite o valor do produto: R$");
    scanf("%f", &Valor);
    printf("\nDigite o valor da taxa (inteiro): ");
    scanf("%f", &Taxa);
    printf("\nDigite o tempo em atraso (mês): ");
    scanf("%f", &Tempo);

    //Processamento
    Preco = Valor + (Valor * (Taxa/100) * Tempo);

    //saída
    printf("\n\nO preço a ser pago é: R$%f\n\n", Preco);
    system("pause");
}
    