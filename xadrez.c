#include <stdio.h>

void moverTorre(int casastorre){
    if (casastorre > 0){
        printf("Direita.\n"); //movendo a torre 5 casas para a direita.
        moverTorre(casastorre - 1);}    
}
void moverBispo(int casasbispo){
    if (casasbispo > 0){
        printf("Cima.\n"); //movendo o bispo 5 casas para cima.
        for (int i = 1; i < 2; i++){
            printf("Direita.\n");} //movendo o bispo 5 casas para a direita.
        moverBispo(casasbispo - 1);}
}
void moverRainha(int casasrainha){
    if (casasrainha > 0){
        printf("Esquerda.\n"); //movendo a rainha 8 casas para a esquerda.
        moverRainha(casasrainha - 1);}
}

int main() {
    int cavalo = 1;
    //Declarando a variável do Cavalo.
    
    printf("Simulador de movimento das peças de xadrez.\n");
    printf("Torre:\n");
    moverTorre(5);
    printf("Torre se moveu 5 casas para a direita.\n");
    //simulando o movimento da torre.

    printf("\nBispo:\n");
    moverBispo(5);
    printf("Bispo se moveu 5 casas para a diagonal superior direita.\n");
    //simulando o movimento do bispo.

    printf("\nRainha:\n");
    moverRainha(8);
    printf("Rainha se moveu 8 casas para a esquerda.\n");
    //simulando o movimento da rainha.
    
    printf("\nCavalo:\n");
    while (cavalo <= 1){
        for (int i = 1, j = 1; i < 3 || j < 2; i++, j++){
            if (j < 2){
                printf("Direita\n");} //movendo o cavalo 1 casa para a direita.
            if (i >= 3)
            break;
            printf("Cima.\n"); //movendo o cavalo 2 casas para cima.
        }
        printf("Cavalo se moveu em 'L'.\n"); //movendo o cavlo 2 casas para a esquerda.
        cavalo++;}
    printf("Cavalo se moveu 2 casas para cima e 1 casa para a direita.\n");
    //simulando o movimento do cavalo.
    
    return 0;
}
