#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){  //Aluno: Elvis Rodrigues Almeida
    int voto;
    float voto_branco=0, a=0, b=0 , c=0, total_eleitores=0, voto_nulo=0, votos_validos, porcentagem_votos_validos, porcentagem_a, porcentagem_b, porcentagem_c, porcentagem_votos_nulos, porcentagem_votos_brancos;
    _Bool parar = 1;
    setlocale(LC_ALL, "Portuguese");

    while (parar)
    {   // Entrada de dados
        printf("\nVotar em branco: 0\nCandidato A: 1 \nCandidato B: 2 \nCandidato C: 3 \nParar votacao: 4\n\n");
        printf("Digite o seu voto: ");
        scanf("%d", &voto);

        
        // Processamento
        if (voto == 4)
        {
            break;
        }
        else if (voto == 0)
        {
            voto_branco++;
        }
        
        else if (voto == 1)
        {
            a++;
        }
        else if (voto == 2)
        {
            b++;
        }
        else if (voto == 3)
        {
            c++;
        }
        else
        {
            voto_nulo++;
        }

        system("cls");
        printf("\nSeu voto foi %d\n\n", voto);
        system("pause");

        total_eleitores++;
        system("cls");
        
    }

    votos_validos = a + b + c;
    porcentagem_votos_validos = votos_validos * 100 /total_eleitores;
    porcentagem_a = a * 100 /total_eleitores;
    porcentagem_b = b * 100 /total_eleitores;
    porcentagem_c = c * 100 /total_eleitores;
    porcentagem_votos_nulos =  voto_nulo * 100 /total_eleitores;
    porcentagem_votos_brancos = voto_branco * 100 /total_eleitores;

    system("cls");
    
    //Saída de dados
    printf("Voto branco %f \nCandidato A %f \nCandidato B %f \nCandidato C %f \nVotos nulos %f \n" ,voto_branco, a, b, c, voto_nulo);
    printf("\n\nTotal de eleitores %f", total_eleitores);
    printf("\nVotos validos %f por cento", porcentagem_votos_validos);
    printf("\nVotos para o candidato A %f por cento", porcentagem_a);
    printf("\nVotos para o candidato B %f por cento", porcentagem_b);
    printf("\nVotos para o candidato C %f por cento", porcentagem_c);
    printf("\nVotos Brancos %f por cento", porcentagem_votos_brancos);
    printf("\nVotos nulos %f por cento\n\n", porcentagem_votos_nulos);

    system("pause");
}