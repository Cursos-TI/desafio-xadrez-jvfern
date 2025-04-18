#include <stdio.h>

// Mover a torre 5 casas pra direita
int main() {
    int i;
        while(i < 5){
        printf("Direita\n"); // imprime a direção do movimento
        i++; 
    }
     i = 0;
// Mover o bispo para 5 casas pra diagonal
        do
        {
        printf("Cima esquerda\n"); // imprime a direção do movimento
        i++;
    } 
    while (i < 5);
// Mover a rainha  casas para a esquerda
    for (i = 0; i < 7; i++){
        printf("Esquerda\n"); // imprime a direção do movimento
    }

    return 0;
}
