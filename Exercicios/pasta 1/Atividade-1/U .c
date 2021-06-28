#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float raio, volume, a=4; 
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    //Processamento
    a = a / 3;
    volume = a * 3.14 * (raio * raio * raio);

    //saída
    printf("O volume de sua esfera é: %f\n", volume);
    system("pause");
}
    