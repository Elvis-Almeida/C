#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main(){ //Aluno: Elvis Rodrigues Almeida
    float pes, metros;
    setlocale(LC_ALL, "Portuguese");

    //Entrada de dados
    printf("Digite a distancia em pés: ");
    scanf("%f", &pes);

    //Processamento
    metros = pes * 0.3048;

    //saída
    printf("%f pes em metros é %f metros\n", pes, metros);
    system("pause");
}
    