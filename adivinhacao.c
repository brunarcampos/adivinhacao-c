#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // permite colocar acentos
    setlocale(LC_ALL, "Portuguese");

    // escrever na tela
    // imprime cabecalho do nosso jogo
    printf("\n\n");
    printf("        P  /_\\  P                                 \n");
    printf("        /_\\_|_|_/_\\                              \n");
    printf("    n_n | ||. .|| | n_n         Bem vindo ao       \n");
    printf("    |_|_|nnnn nnnn|_|_|     Jogo de Adivinha��o!   \n");
    printf("    |" "  |  |_|  |"  " |                          \n");
    printf("    |_____| ' _ ' |_____|                          \n");
    printf("          \\__|_|__/                               \n");
    printf("\n\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;
    int nivel;
    printf("Qual o n�vel de dificuldade?\n");
    printf("(1) F�cil (2) M�dio (3) Dif�cil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;
    switch(nivel) {
        case 1:
        numerodetentativas = 20;
        break;
        case 2: 
        numerodetentativas = 15;
        break;
        default:
        numerodetentativas = 6;
        break;
    }
    // Enquanto o jogador n�o ganhou
    for (int i = 1; i <= numerodetentativas; i++)
    {
        printf("Tentativa %d\n", tentativas);
        printf("Qual � o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0)
        {
            printf("Voc� n�o pode chutar n�meros negativos!\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        // Se o chute for igual ao numero secreto
        if (acertou)
        {
            break;
        }
        else if (maior)
        {
            // Caso contr�rio
            printf("Seu chute foi maior que o n�meo secreto!\n");
        }
        else
        {
            printf("Seu chute foi menor que o n�mero secreto!\n");
        }

        tentativas++;
        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }

    printf("Fim de Jogo!\n");
    if (acertou)
    {
        printf("\n\n");
        printf("               OOOOOOOOOOO               \n");
        printf("           OOOOOOOOOOOOOOOOOOO           \n"); 
        printf("        OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("      OOOOOO      OOOOO      OOOOOO      \n");
        printf("    OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf("   OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("  OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf("   OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("    OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("     OOOOO   OOOOOOOOOOOOOOO   OOOOO     \n");
        printf("       OOOOOO   OOOOOOOOO   OOOOOO       \n");
        printf("          OOOOOO         OOOOOO          \n");
        printf("              OOOOOOOOOOOO               \n");
        printf("\n\n");

        printf("Parab�ns! Voc� ganhou!!\n");
        printf("Voc� acertou em %d tentativas!", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    }
    else
    {
        printf("Ah n�o, voc� perdeu! Tente de novo!\n");

        printf("\n\n");
        printf("  \\|/ ____ \\|/  \n");
        printf("  @~/ ,. \\~@     \n");
        printf("  /_( \\__/ )_\\  \n");
        printf("     \\__U_/      \n");
        printf("\n\n");
    }
        
}
 