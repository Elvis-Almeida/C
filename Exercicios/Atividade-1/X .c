#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float base, indice, resultado;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite a base da raiz: ");
    scanf("%f", &base);
    printf("Digite o índice da raiz: ");
    scanf("%f", &indice);

    //Processamento
    resultado = pow(base, 1.0/indice);
    

    //saída
    printf("O resultado é : %f\n\n", resultado);
    system("pause");
}
    