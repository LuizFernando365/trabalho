// exercicio7_simulador_investimento.c
#include <stdio.h>

int main() {
    float valor_inicial, taxa_juros_anual;
    int anos;
    
    printf("Simulador de investimento\n\n");
    printf("Valor inicial (R$): ");
    scanf("%f", &valor_inicial);
    printf("Taxa de juros anual (%%): ");
    scanf("%f", &taxa_juros_anual);
    printf("Quantos anos: ");
    scanf("%d", &anos);
    
    float montante = valor_inicial;
    float taxa = taxa_juros_anual / 100.0;
    
    printf("\nEvolucao do investimento:\n");
    for(int ano = 1; ano <= anos; ano++) {
        montante = montante * (1 + taxa);
        printf("Ano %2d: R$ %.2f\n", ano, montante);
    }
    
    return 0;
}