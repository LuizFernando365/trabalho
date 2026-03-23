// exercicio4_controle_notas_turma.c
#include <stdio.h>

int main() {
    int qtd_alunos;
    float nota, soma = 0.0;
    int aprovados = 0, recuperacao = 0, reprovados = 0;
    
    printf("Quantos alunos tem na turma? ");
    scanf("%d", &qtd_alunos);
    
    if (qtd_alunos <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }
    
    for(int i = 1; i <= qtd_alunos; i++) {
        printf("Nota do aluno %d: ", i);
        scanf("%f", &nota);
        
        soma += nota;
        
        if (nota >= 7.0)      aprovados++;
        else if (nota >= 5.0) recuperacao++;
        else                  reprovados++;
    }
    
    printf("\n--- Resultado da turma ---\n");
    printf("Media da turma    : %.2f\n", soma / qtd_alunos);
    printf("Aprovados         : %d\n", aprovados);
    printf("Em recuperacao    : %d\n", recuperacao);
    printf("Reprovados        : %d\n", reprovados);
    
    return 0;
}