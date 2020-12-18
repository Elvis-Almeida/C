#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void menu_principal()
{
    system("cls");      // limpar o terminal
    system("color 02"); //Para colorir o terminal
    printf("<========= Seja Bem Vindo =========>\n");
    printf(" Digite o numero da opcao escolhida\n\n");
    printf(" 1 - Mini Game pedra papel tesoura \n");
    printf(" 2 - Armazene e pesquise nomes\n");
    printf(" 3 - Finalizar Programa\n\n");
}

void menu_armazenar_pesquisar(){
    system("cls");      // limpar o terminal
    system("color 05"); //Para colorir o terminal
    printf("<========= Seja Bem Vindo =========>\n");
    printf(" Digite o numero da opcao escolhida\n\n");
    printf(" 1 - Pesquisar Pessoa\n");
    printf(" 2 - Armazenar Pessoa\n");
    printf(" 3 - Ver lista Completa\n");
    printf(" 4 - Finalizar Programa\n\n");
}

void menu_pre_game()
{
    system("cls");      // limpar o terminal
    system("color 09"); //Para colorir o terminal
    printf("<========= Seja Bem Vindo =========>\n");
    printf(" Digite o numero da opcao escolhida\n\n");
    printf(" 1 - Tutorial\n");
    printf(" 2 - Iniciar Game\n");
    printf(" 3 - Finalizar Game\n\n");
}

void tutorial_game()
{
    system("cls");      // limpar o terminal
    system("color 0f"); //Para colorir o terminal
    printf("O jogo pedra papel tesoura consiste em:\n\n");
    printf("Sao dois jogadores, nesse caso voce e a maquina\n");
    printf("cada um dos jogadores pode escolher 3 opcoes\n");
    printf("que sao pedra, papel ou tesoura\n\n");
    printf("segue a seguinte logica: \n");
    printf("pedra quebra a tesoura\n");
    printf("papel embrulha a pedra\n");
    printf("tesoura corta papel\n\n");
    printf("Ou seja a pedra ganha da tesoura\n");
    printf("O papel ganha da pedra\n");
    printf("A tesoura ganha do papel\n\n");
    printf("Assim por exemplo, se voce escolhe pedra e seu\n");
    printf("oponente papel, voce perde.\n");
    printf("Caso voce e seu oponente escolhe o mesmo, empata.\n\n");
    printf("Mas nem voce e nem seu oponente sabe o que cada\num escolheu ate o momento que os dois dizem ao mesmo tempo suas escolhas\n\n");

    system("pause");
}

void menu_game()
{
    system("cls");      // limpar o terminal
    system("color 09"); //Para colorir o terminal
    printf("<========= Predra Papel Tesoura =========>\n");
    printf("    Digite o numero da opcao escolhida\n\n");
    printf("    1 - Pedra\n");
    printf("    2 - Papel\n");
    printf("    3 - Tesoura\n\n");
}

typedef struct StructPessoas
{
    char nome[20];
    int idade;
    int peso;

}Pessoas;

Pessoas pessoa[2];

void Jogo_predra_papel_tesoura()
{
    int opcao, opcaoComputador, contadorVitorias=0, contadorDerrota=0, contadorEmpate=0;
    while (1)
    {
        //Menu
        menu_game();
        srand(time(NULL));
        opcaoComputador = (rand() % 3) + 1;
        printf("Digite a opcao escolhida: ");
        scanf("%d", &opcao);

        //Verificar se a entrada está correta
        while (opcao != 1 && opcao != 2 && opcao != 3)
        {
            menu_game();
            system("color 04");//Colorir para Vermelho
            printf("Opcao INVALIDA. Digite uma opcao existente: ");
            scanf("%d", &opcao);
        }
        system("color 01");//Colorir para o padrão

        // Para escrever a opção do pc
        if (opcaoComputador == 1)
        {
            printf("\nO pc escolheu Pedra\n");
        }
        if (opcaoComputador == 2)
        {
            printf("\nO pc escolheu Papel\n");
        }
        if (opcaoComputador == 3)
        {
            printf("\nO pc escolheu Tesoura\n");
        }

        //Para saber se empatou ganhou ou perdeu
        if ((opcao == 1 && opcaoComputador == 2) || (opcao == 3 && opcaoComputador == 1) || (opcao == 2 && opcaoComputador == 3)) // se perdeu
        {
            system("color 04"); //Colorir para Vermelho
            printf("voce PERDEU\n");
            contadorDerrota++;
        }
        else if (opcao == opcaoComputador) // se empatou
        {
            system("color 0f"); //Colorir para Branco
            printf("voce EMPATOU\n");
            contadorEmpate++;
        }
        else // se ganhou
        {
            system("color 02"); //Colorir para Verde
            printf("voce VENCEU!! :)\n");
            contadorVitorias++;
        }

        //Menu
        printf("\n\nDeseja continuar?\n 1 - sim\n 2 - nao\n-->");
        scanf("%d", &opcao);

        //Verificar se a entrada está correta
        while (opcao != 1 && opcao != 2)
        {
            system("cls");
            system("color 04");
            printf("\n\nDeseja continuar?\n 1 - sim\n 2 - nao\n\n");
            printf("Opcao INVALIDA. Digite uma opcao existente: ");
            scanf("%d", &opcao);
        }

        //Função Para parar
        if (opcao == 2)
        {
            //estatisticas do jogo
            system("cls");
            system("color 07");
            printf("\n\nEstatisticas:\n");
            printf("Vitorias: %d\n", contadorVitorias);
            printf("Derrotas: %d\n", contadorDerrota);
            printf("Empates : %d\n\n", contadorEmpate);

            system("pause");
            break;
        }
        
    }
}