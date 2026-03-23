
#include <stdio.h>
#include <float.h>

int main() {
    int qtd;
    float numero, soma = 0.0;
    float maior = -FLT_MAX;
    float menor = FLT_MAX;
    
    printf("Quantos numeros voce deseja digitar? ");
    scanf("%d", &qtd);
    
    if (qtd <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }
    
    for(int i = 1; i <= qtd; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%f", &numero);
        
        soma += numero;
        if (numero > maior) maior = numero;
        if (numero < menor) menor = numero;
    }
    
    printf("\n--- Resultados ---\n");
    printf("Soma total     : %.2f\n", soma);
    printf("Media          : %.2f\n", soma / qtd);
    printf("Maior numero   : %.2f\n", maior);
    printf("Menor numero   : %.2f\n", menor);
    
    return 0;
}