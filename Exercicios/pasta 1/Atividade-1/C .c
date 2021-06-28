#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float Raio, Altura, Volume, potencia;
    setlocale(LC_ALL, "Portuguese");
   
    //Entrada de dados
    printf("\nDigite o Raio: ");
    scanf("%f", &Raio);
    printf("Digite a Altura: ");
    scanf("%f", &Altura);

    //Processamento
    potencia = pow(Raio, 2);

    Volume = 3.14 * potencia * Altura;

    //saída
    printf("\nVolume do cilindro: %f\n", Volume);
    system("pause");
}