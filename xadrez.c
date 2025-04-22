#include <stdio.h>
int main() {
    int torre, bispo = 1, rainha = 1;
    //variáveis declaradas (A variável "torre" não tem um número declarado pois esse número será declarado depois).
    
    printf("Simulador de movimento das peças de xadrez.\n");
    printf("Torre:\n");
    for (torre = 1; torre <= 5; torre++){
        //número da variável "torre" declarado.
        printf("Torre se moveu para a direita.\n");}
    printf("Torre se moveu 5 casas para a direita.\n");
    //simulando o movimento da torre.

    printf("Bispo:\n");
    while (bispo <= 5){
        printf("Bispo se moveu para cima.\n");
        printf("Bispo se moveu para a direita.\n");
        bispo++;}
    printf("Bispo se moveu 5 casas para a diagonal direita.\n");
    //simulando o movimento do bispo.

    printf("Rainha:\n");
    do{
        printf("Rainha se moveu para a esquerda.\n");
        rainha++;
    } while (rainha <= 8);
    printf("Rainha se moveu 8 casas para a esquerda.\n");
    //simulando o movimento da rainha.
    
    return 0;
}
