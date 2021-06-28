#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float raio, area;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite o Raio: ");
    scanf("%f", &raio);

    //Processamento
    area = 3.14 * (raio * raio);

    //saída
    printf("A área de sua circunferencia é: %f\n", area);
    system("pause");
}
    