#include <stdio.h>
#include <locale.h>

int main() {
    // permite colocar acentos
    setlocale(LC_ALL, "Portuguese");

    // escrever na tela
    // imprime cabecalho do nosso jogo
    printf("****************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
    printf("****************************************\n");

    int numerosecreto = 42;

    int chute;
    int tentativas = 1;

    //Enquanto o jogador n�o ganhou
    while(1) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual � o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Voc� n�o pode chutar n�meros negativos!\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        // Se o chute for igual ao numero secreto
        if (acertou){
            printf("Parab�ns! Voc� acertou!!\n");
            printf("Jogue de novo, voc� � um bom jogador!\n");

            break;
        }
        else if (maior) {
            // Caso contr�rio
            printf("Seu chute foi maior que o n�meo secreto!\n");
        }
        else{
            printf("Seu chute foi menor que o n�mero secreto!\n");
        }

        tentativas++;
    }

    printf("Fim de jogo!\n");
    printf("Voc� acertou em %d tentativas!", tentativas);
}
