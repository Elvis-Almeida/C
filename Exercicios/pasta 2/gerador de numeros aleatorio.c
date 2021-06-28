#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    FILE *arquivo;
    int a,b,c,i=0;

    arquivo = fopen("notas 7.9.txt","a");
    srand(time(NULL));
    while (1)
    {
        a = rand() % 6;
        b = rand() % 3;
        c = rand() % 4;
        if ((a+b+c) == 7)
        {   
            fprintf(arquivo, "%d %d %d\n", a,b,c);
            i++;
            if (i==100)
            {
                break;
            }
        }
        printf("nada\n");  
    }  
}