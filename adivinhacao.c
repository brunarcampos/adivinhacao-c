#include <stdio.h>
#include <locale.h>

int main () {
    // permite colocar acentos
    setlocale(LC_ALL, "Portuguese");


    // escrever na tela
    // imprime cabecalho do nosso jogo
    printf("****************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
    printf("****************************************\n");

     int numerosecreto = 42;

     int chute;

     printf("Qual � o seu chute? ");
     scanf("%d", &chute); 
     printf("Seu chute foi %d\n", chute);

    int acertou = (chute == numerosecreto);

    //Se o chute for igual ao numero secreto
    if(acertou) {
     printf("Parab�ns! Voc� acertou!!\n");
     printf("Jogue de novo, voc� � um bom jogador!\n");
     } else {
        int maior = chute > numerosecreto;
        //Caso contr�rio
        if(maior) {
            printf("Seu chute foi maior que o n�meo secreto!\n");
        } else {
            printf("Seu chute foi menor que o n�mero secreto!\n");
        }
     }
}