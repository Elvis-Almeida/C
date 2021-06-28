#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float Cel, Fah;  
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &Cel);

    //Processamento
    Fah = ((9 * Cel) + 160) / 5;

    //saída
    printf("\nA temperatura em Fahrenheit: %f\n", Fah);

    system("pause");
    return 0;
}