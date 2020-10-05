#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float Cel, Fah;  
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &Fah);

    //Processamento
    Cel = ((Fah - 32) * 5) /9;

    //saída
    printf("\nA temperatura em Celsius: %f\n", Cel);

    system("pause");
    return 0;
}