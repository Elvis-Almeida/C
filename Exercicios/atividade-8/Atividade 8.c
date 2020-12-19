#include <stdio.h>
#include "jogoPPT.h"
#include "ArmzenarPequisar.h"

//mini game pedra papel tesoura

//pesquisa de dados e armazenamento de dados

void menu_principal()
{
    system("cls");      // limpar o terminal
    system("color 02");      //Para colorir o terminal
    printf("<========= Seja Bem Vindo =========>\n");
    printf(" Digite o numero da opcao escolhida\n\n");
    printf(" 1 - Mini Game pedra papel tesoura \n");
    printf(" 2 - Armazene e pesquise nomes\n");
    printf(" 3 - Finalizar Programa\n\n");
}

int main()
{
    int opcao;

    while (1)
    {
        //Menu
        menu_principal();
        printf(" Digite a opcao escolhida: ");
        scanf("%d", &opcao);

        //verificar se a entrada foi correta
        while (opcao != 1 && opcao != 2 && opcao != 3)
        {
            menu_principal();
            system("color 04");
            printf("Opcao INVALIDA. Digite uma opcao existente: ");
            scanf("%d", &opcao);
        }
        system("color 07");

        //Mini Game
        if (opcao == 1)
        {
            Jogo();
        }

        //Armazenar e pesquisar nomes
        if (opcao == 2)
        {
            FILE *Nomes;
            ArmazenarPesquisar(Nomes);
        }
        
        //Finalizar
        if (opcao == 3)
        {
            printf("\n<====== Programa finalizado ======>\n\n");
            break;
        }
    }

    return 0;
}