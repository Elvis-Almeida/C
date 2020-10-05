#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float distancia, tempo, velocidade;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite a distancia percorrida (Km): ");
    scanf("%f", &distancia);
    printf("Digite o tempo (minutos)");
    scanf("%f", &tempo);

    //Processamento
    velocidade = (distancia * 1000)/(tempo * 60);

    //saída
    printf("A velocidade do projetil é: %f Km/h\n", velocidade);
    system("pause");
}
    