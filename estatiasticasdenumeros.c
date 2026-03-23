// exercicio6_estatisticas_numeros.c
#include <stdio.h>

int main() {
    int numero;
    int total = 0, positivos = 0, negativos = 0;
    long soma = 0;  // long para suportar somas maiores
    
    printf("Digite varios numeros (0 para encerrar):\n");
    
    while (1) {
        scanf("%d", &numero);
        if (numero == 0) break;
        
        total++;
        soma += numero;
        
        if (numero > 0) positivos++;
        if (numero < 0) negativos++;
    }
    
    printf("\n--- Estatisticas ---\n");
    printf("Total de numeros digitados : %d\n", total);
    printf("Numeros positivos           : %d\n", positivos);
    printf("Numeros negativos           : %d\n", negativos);
    printf("Soma total                  : %ld\n", soma);
    
    return 0;
}