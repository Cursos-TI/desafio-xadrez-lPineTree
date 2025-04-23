#include <stdio.h>
int main() {
    int torre, bispo = 1, rainha = 1, cavalo = 1;
    //variáveis declaradas (A variável "torre" não tem um número declarado pois esse número será declarado depois).
    
    printf("Simulador de movimento das peças de xadrez.\n");
    printf("Torre:\n");
    for (torre = 1; torre <= 5; torre++){
        //número da variável "torre" declarado.
        printf("Torre se moveu para a direita.\n");} //movendo a torre 5 casas para a direita.
    printf("Torre se moveu 5 casas para a direita.\n");
    //simulando o movimento da torre.

    printf("\nBispo:\n");
    while (bispo <= 5){
        printf("Bispo se moveu para cima.\n"); //movendo o bispo 5 casas para cima.
        printf("Bispo se moveu para a direita.\n"); //movendo o bispo 5 casas para a direita.
        bispo++;}
    printf("Bispo se moveu 5 casas para a diagonal direita.\n");
    //simulando o movimento do bispo.

    printf("\nRainha:\n");
    do{
        printf("Rainha se moveu para a esquerda.\n"); //movendo a rainha 8 casas para a esquerda.
        rainha++;
    } while (rainha <= 8);
    printf("Rainha se moveu 8 casas para a esquerda.\n");
    //simulando o movimento da rainha.
    
    printf("\nCavalo:\n");
    while (cavalo <= 1){
        for (int i = 1; i < 3; i++){
            printf("Cavalo se moveu para baixo.\n"); //movendo o cavalo 2 casas para baixo.
        }
        printf("Cavalo se moveu para a esquerda.\n"); //movendo o cavlo 2 casas para a esquerda.
        cavalo++;}
    printf("Cavalo se moveu 2 casas para baixo e 1 casa para a esquerda.\n");
    //simulando o movimento do cavalo.
    
    return 0;
}
