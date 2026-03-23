// exercicio3_tabuada_personalizada.c
#include <stdio.h>

int main() {
    int numero;
    int continuar;
    
    do {
        printf("\nDigite um numero para ver a tabuada: ");
        scanf("%d", &numero);
        
        printf("\nTabuada do %d:\n", numero);
        for(int i = 1; i <= 10; i++) {
            printf("%2d x %2d = %3d\n", i, numero, i * numero);
        }
        
        printf("\nDeseja ver a tabuada de outro numero? (1 = Sim / 0 = Nao): ");
        scanf("%d", &continuar);
        
    } while (continuar == 1);
    
    printf("Programa finalizado.\n");
    return 0;
}