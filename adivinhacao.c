#include <stdio.h>
#include <locale.h>

int main() {
    // permite colocar acentos
    setlocale(LC_ALL, "Portuguese");

    // escrever na tela
    // imprime cabecalho do nosso jogo
    printf("****************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("****************************************\n");

    int numerosecreto = 42;

    int chute;
    int tentativas = 1;

    //Enquanto o jogador não ganhou
    while(1) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        // Se o chute for igual ao numero secreto
        if (acertou){
            printf("Parabéns! Você acertou!!\n");
            printf("Jogue de novo, você é um bom jogador!\n");

            break;
        }
        else if (maior) {
            // Caso contrário
            printf("Seu chute foi maior que o númeo secreto!\n");
        }
        else{
            printf("Seu chute foi menor que o número secreto!\n");
        }

        tentativas++;
    }

    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!", tentativas);
}
