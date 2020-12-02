#include <stdio.h>

int main(){
    int  i;
    float tot=0, menor, maior, matrizA[20];

    for (i = 0; i < 20; i++)
    {
        printf("digite a temperatura: ");
        scanf("%f", &matrizA[i]);
    }
    
    for(i=0; i < 20; i++){
        tot += matrizA[i];
        if (i==0)
        {
            menor = matrizA[i];
            maior = matrizA[i];
        }
        if (matrizA[i] > maior)
        {
            maior = matrizA[i];
        }
        if (matrizA[i] < menor){
            menor = matrizA[i];
        }
        
    }
    printf("O menor foi: %f\nO maior foi: %f\nA media foi: %.2f", menor, maior, tot*1.0/20);
}