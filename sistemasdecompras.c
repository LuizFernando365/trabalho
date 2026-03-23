// exercicio8_sistema_compras.c
#include <stdio.h>

int main() {
    float preco, total_compra = 0.0;
    int qtd, total_itens = 0;
    int total_produtos = 0;
    
    printf("Sistema de Compras\n");
    printf("(Digite 0 no preco para finalizar)\n\n");
    
    while (1) {
        printf("Preco do produto (R$): ");
        scanf("%f", &preco);
        
        if (preco <= 0) break;
        
        printf("Quantidade: ");
        scanf("%d", &qtd);
        
        float subtotal = preco * qtd;
        total_compra += subtotal;
        total_itens += qtd;
        total_produtos++;
        
        printf("Subtotal deste produto: R$ %.2f\n\n", subtotal);
    }
    
    printf("\n--- Resumo da compra ---\n");
    printf("Total de produtos diferentes : %d\n", total_produtos);
    printf("Quantidade total de itens    : %d\n", total_itens);
    printf("Valor total da compra        : R$ %.2f\n", total_compra);
    
    if (total_produtos > 0) {
        printf("Preco medio por produto      : R$ %.2f\n", total_compra / total_produtos);
    }
    
    return 0;
}