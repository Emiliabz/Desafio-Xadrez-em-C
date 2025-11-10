#include <stdio.h>

// Constantes para direções
#define CIMA "Cima\n"
#define BAIXO "Baixo\n"
#define ESQUERDA "Esquerda\n"
#define DIREITA "Direita\n"

int main() {
    // Variáveis para controle dos loops
    int i, j;
    
    // Movimento do Bispo: 5 casas na diagonal superior direita
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    for(i = 1; i <= 5; i++) {
        printf(CIMA);  // Movimento para cima
        printf(DIREITA); // Movimento para direita
    }
    
    printf("\n"); // Espaço entre os movimentos
    
    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre (5 casas para a direita):\n");
    for(i = 1; i <= 5; i++) {
        printf(DIREITA);
    }
    
    printf("\n"); // Espaço entre os movimentos
    
    // Movimento da Rainha: 8 casas para a esquerda
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    i = 1;
    while(i <= 8) {
        printf(ESQUERDA);
        i++;
    }
    
    printf("\n"); // Espaço entre os movimentos
    
    // Exemplo adicional com do-while para demonstrar todas as direções
    printf("Demonstração de todas as direções com do-while:\n");
    j = 0;
    do {
        printf(CIMA);
        printf(BAIXO);
        printf(ESQUERDA);
        printf(DIREITA);
        j++;
    } while(j < 1); // Executa apenas uma vez
    
    return 0;
}