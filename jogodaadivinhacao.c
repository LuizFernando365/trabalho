// exercicio5_jogo_adivinhacao.c
#include <stdio.h>

int main() {
    int secreto = 37;
    int tentativa;
    int cont = 0;
    
    printf("Jogo de Adivinhacao\n");
    printf("Tente descobrir o numero secreto!\n\n");
    
    do {
        printf("Sua tentativa: ");
        scanf("%d", &tentativa);
        cont++;
        
        if (tentativa > secreto) {
            printf("Muito alto!\n");
        }
        else if (tentativa < secreto) {
            printf("Muito baixo!\n");
        }
        
    } while (tentativa != secreto);
    
    printf("\nParabens! Voce acertou em %d tentativa(s)!\n", cont);
    
    return 0;
}