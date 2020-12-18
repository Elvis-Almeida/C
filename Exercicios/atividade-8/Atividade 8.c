#include <stdio.h>
#include "MinhaBiblioteca.h"
//mini game pedra papel tesoura

//pesquisa de dados e armazenamento de dados

//Jogo

void armazenar_pesquisar(){
    menu_armazenar_pesquisar();
}
void Jogo()
{
    int opcao;
    while (1)
    {
        menu_pre_game();
        printf("--> ");
        scanf("%d", &opcao);
        while (opcao != 1 && opcao != 2 && opcao != 3)
        {
            menu_pre_game();
            system("color 04");
            printf("Opcao INVALIDA. Digite uma opcao existente: ");
            scanf("%d", &opcao);
        }
        if (opcao == 1)
        {
            tutorial_game();
        }
        if (opcao == 2)
        {
            Jogo_predra_papel_tesoura();
        }
        if (opcao == 3)
        {
            break;
        }
    }
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
            armazenar_pesquisar();
        }
        
        //Finalizar
        if (opcao == 3)
        {
            printf("<====== Programa finalizado ======>");
            break;
        }
    }

    return 0;
}