#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float litros_utilizados, Distancia, Tempo, Velocidade;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite a velocidade média km/h: ");
    scanf("%f", &Velocidade);
    printf("Digite o Tempo gasto em hora: ");
    scanf("%f", &Tempo);
    
    //Processamento
    Distancia = Velocidade * Tempo;
    litros_utilizados = Distancia / 12;

    //saída
    printf("\n\nforam gastos %f litro(s)", litros_utilizados);
    printf("\nA viajem durou %f hora(s)", Tempo);
    printf("\nForam rodados %f Km ", Distancia);
    printf("em uma velocidade média de %f Km/h\n", Velocidade);
    system("pause");
}
    