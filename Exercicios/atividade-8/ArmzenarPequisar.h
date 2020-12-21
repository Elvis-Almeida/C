#include <stdlib.h>
#include <stdio.h>
#define _GNU_SOURCE

void menu_armazenar_pesquisar()
{
    system("cls");      // limpar o terminal
    system("color 05"); //Para colorir o terminal
    printf("<========= Seja Bem Vindo =========>\n");
    printf(" Digite o numero da opcao escolhida\n\n");
    printf(" 1 - Armazenar Pessoa\n");
    printf(" 2 - Pesquisar Pessoa\n");
    printf(" 3 - Ver lista Completa\n");
    printf(" 4 - Deletar todas pessoas\n");
    printf(" 5 - Voltar para o Menu Principal\n\n");
}

void armazenarPessoas(FILE *Nomes)
{
    char Nome[70];
    char idade[10];
    char peso[10];
    char altura[10];
    int opcao, cont = 0;
    while (1)
    {
        if ((Nomes = fopen("Nome das Pessoas.txt", "a")) == NULL)
        {
            printf("nao foi possivel abrir o arquivo");
        }
        else
        {
            printf("arquivo aberto com sucesso\n");
        }
        system("cls");
        printf("<== Armazenar ==>\n\n");

        printf(" Digite o nome: ");
        fflush(stdin);
        fgets(Nome, 69, stdin);

        printf(" Digite a idade: ");
        fflush(stdin);
        fgets(idade, 69, stdin);

        printf(" Digite o peso: ");
        fflush(stdin);
        fgets(peso, 69, stdin);

        printf(" Digite a altura: ");
        fflush(stdin);
        fgets(altura, 69, stdin);

        system("cls");
        printf("\nDeseja salvar os dados dessa pessoa: %s\n", Nome);
        printf(" 1-sim\n 2-nao\n\n --> ");
        scanf("%d", &opcao);
        //verificar se a entrada foi correta
        while (opcao != 1 && opcao != 2)
        {
            system("cls");
            system("color 04");
            printf("\nDeseja salvar os dados dessa pessoa: %s\n", Nome);
            printf(" 1-sim\n 2-nao\n\n");
            printf("Opcao INVALIDA. Digite uma opcao existente: ");
            fflush(stdin);
            scanf("%d", &opcao);
        }
        if (opcao == 1)
        {
            system("color 02");
            fputs("", Nomes);
            fputs(Nome, Nomes);
            fputs(idade, Nomes);
            fputs(peso, Nomes);
            fputs(altura, Nomes);
            system("cls");
            printf("\nPessoa salva\n\n");
            system("pause");
        }
        fclose(Nomes);
        system("cls");
        system("color 01");
        printf("\nDeseja Armazenar outra pessoa?\n 1-sim\n 2-nao\n\n --> ");
        fflush(stdin);
        scanf("%d", &opcao);

        //verificar se a entrada foi correta
        while (opcao != 1 && opcao != 2)
        {
            system("cls");
            printf("\nDeseja Armazenar outra pessoa?\n 1-sim\n 2-nao\n\n --> ");
            system("color 04");
            printf("Opcao INVALIDA. Digite uma opcao existente: ");
            fflush(stdin);
            scanf("%d", &opcao);
        }
        system("color 05");
        if (opcao == 2)
        {
            break;
        }
    }
}

void PesquisarNome(FILE *Nomes)
{
    //ler os dados dividir cada palavra em um vetor e depois com o fputs armazenar no arquivo
    while (1)
    {
        size_t len = 1;
        char *linha = malloc(len);
        char *pesquisa[70];
        int i = 0, opcao, NaoAchou = 1, cont = 0, NaoAchou2=1;

        system("cls");
        Nomes = fopen("Nome das Pessoas.txt", "r");

        if (!Nomes)
        {
            system("color 04");
            printf("\nO arquivo nao abriu ou nao existe\n");
            printf("Tente Armazenar algum nome primeiro\n\n");
            system("pause");
            return 1;
        }
        fflush(stdin);
        printf("\n<======= Pesquisar =======>\n");
        printf("\nDigite o nome da pessoa que procura: ");
        fgets(pesquisa, 69, stdin);
        system("cls");
        while (getline(&linha, &len, Nomes) > 0)
        {   
            
            if (cont == 0)
            {
                if (strcasecmp(linha, pesquisa) == 0)
                {
                    system("color 02");
                    printf("\n Seu Nome: %s foi encontrado\n", linha);
                    NaoAchou = 0;
                }
                
            }
            if (NaoAchou == 0)
            {
                if (cont == 0)
                {
                    printf("\n<========= Dados encontrados =========>\n");
                    printf("   Nome : ");
                    printf("%s", linha);
                }
                if (cont == 1)
                {
                    printf("   Idade : ");
                    printf("%s", linha);
                }
                if (cont == 2)
                {
                    printf("   peso : ");
                    printf("%s", linha);
                }
                if (cont == 3)
                {
                    printf("   Altura : ");
                    printf("%s", linha);
                }
                NaoAchou2=0;
            }
            cont++;
            if (cont == 4)
            {
                NaoAchou=1;
                cont = 0;
            }
            //if (cont==4 && NaoAchou == 0)
            //{
            //    break;
            //}
            
        }
        if (NaoAchou2 == 1)
        {
            system("color 04");
            printf("\n Seu Nome: %s Nao foi encontrado\n", pesquisa);
            printf(" Verifique se seu nome foi digitado corretamente\n");
        }
        printf("\n");
        system("pause");
        free(pesquisa);
        free(linha);
        fclose(Nomes);

        system("cls");
        system("color 01");
        printf("\nDeseja Pesquisar outro nome?\n 1-sim\n 2-nao\n\n --> ");
        scanf("%d", &opcao);

        //verificar se a entrada foi correta
        while (opcao != 1 && opcao != 2)
        {
            system("cls");
            printf("\nDeseja Pesquisar outro nome?\n 1-sim\n 2-nao\n\n --> ");
            system("color 04");
            printf("Opcao INVALIDA. Digite uma opcao existente: ");
            fflush(stdin);
            scanf("%d", &opcao);
        }
        system("color 05");
        if (opcao == 2)
        {
            break;
        }
    }
}

void imprimirPessoas(FILE *Nomes)
{
    Nomes = fopen("Nome das Pessoas.txt", "r");
    size_t len;
    char *linha = malloc(len);
    int cont = 0;
    system("cls");
    if (!Nomes)
    {
        system("color 04");
        printf("\nArquivo nao encontrado!\n");
        printf("Tente armazenar algum nome primeiro\n\n");
        system("pause");
        return 1;
    }
    printf("<====== Lista de pessoas salvas ======>\n");
    while (getline(&linha, &len, Nomes) > 0)
    {
        if (cont == 0)
        {
            printf("\n<========= Pessoa =========>\n");
            printf("Nome : ");
            printf("%s", linha);
        }
        if (cont == 1)
        {
            printf("Idade : ");
            printf("%s", linha);
        }
        if (cont == 2)
        {
            printf("peso : ");
            printf("%s", linha);
        }
        if (cont == 3)
        {
            printf("Altura : ");
            printf("%s", linha);
        }
        cont++;
        if (cont == 4)
        {
            cont = 0;
        }
    }
    printf("\n");
    system("pause");
    fclose(Nomes);
    return 0;
}

void deletarArquivo(FILE *Nomes)
{
    int opcao;
    system("cls");
    system("color 01");
    printf("\nDeseja excluir todas as pessoas?\n 1-sim\n 2-nao\n\n --> ");
    scanf("%d", &opcao);

    //verificar se a entrada foi correta
    while (opcao != 1 && opcao != 2)
    {
        system("cls");
        printf("\nDeseja excluir todas as pessoas?\n 1-sim\n 2-nao\n\n --> ");
        system("color 04");
        printf("Opcao INVALIDA. Digite uma opcao existente: ");
        fflush(stdin);
        scanf("%d", &opcao);
    }
    system("cls");
    if (opcao == 1)
    {
        if ((remove("Nome das Pessoas.txt")) != 0)
        {
            system("color 04");
            printf("\nErro, Arquivo nao encontrado\n");
            printf("Talvez voce nao tenha salvado nenhum nome\n\n");
        }
        else
        {
            system("color 02");
            printf("\nArquivo Deletado Com Sucesso!\n\n");
        }
        system("pause");
    }
}

void ArmazenarPesquisar(FILE *Nomes)
{
    int opcao;
    while (1)
    {
        menu_armazenar_pesquisar();
        printf("--> ");
        scanf("%d", &opcao);
        while (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5)
        {
            menu_armazenar_pesquisar();
            system("color 04");
            printf("Opcao INVALIDA. Digite uma opcao existente: ");
            fflush(stdin);
            scanf("%d", &opcao);
        }
        system("color 05");
        if (opcao == 1)
        {
            armazenarPessoas(Nomes);
        }
        if (opcao == 2)
        {
            PesquisarNome(Nomes);
        }
        if (opcao == 3)
        {
            imprimirPessoas(Nomes);
        }
        if (opcao == 4)
        {
            deletarArquivo(Nomes);
        }
        if (opcao == 5)
        {
            break;
        }
    }
}