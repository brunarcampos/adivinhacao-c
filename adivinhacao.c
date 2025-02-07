#include <stdio.h>
#include <locale.h>

int main () {
    // permite colocar acentos
    setlocale(LC_ALL, "Portuguese");


    // escrever na tela
    // imprime cabecalho do nosso jogo
    printf("****************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("****************************************\n");

     int numerosecreto = 42;

     int chute;

     printf("Qual é o seu chute? ");
     scanf("%d", &chute); 
     printf("Seu chute foi %d\n", chute);

    //Se o chute for igual ao numero secreto
    if(chute == numerosecreto) {
     printf("Parabéns! Você acertou!!\n");
     printf("Jogue de novo, você é um bom jogador!\n");
     } else {
        //Caso contrário
        if(chute > numerosecreto) {
            printf("Seu chute foi maior que o númeo secreto!");
        }

        if(chute < numerosecreto) {
            printf("Seu chute foi menor que o número secreto!");
        }

     }
}