// exercicio2_sistema_votacao.c
#include <stdio.h>

int main() {
    int eleitores, voto;
    int cand1 = 0, cand2 = 0, cand3 = 0;
    
    printf("Quantas pessoas vao votar? ");
    scanf("%d", &eleitores);
    
    if (eleitores <= 0) {
        printf("Numero invalido de eleitores.\n");
        return 1;
    }
    
    for(int i = 1; i <= eleitores; i++) {
        do {
            printf("Eleitor %d - Vote (1, 2 ou 3): ", i);
            scanf("%d", &voto);
            
            if (voto < 1 || voto > 3) {
                printf("Voto invalido! Tente novamente.\n");
            }
        } while (voto < 1 || voto > 3);
        
        if (voto == 1) cand1++;
        else if (voto == 2) cand2++;
        else cand3++;
    }
    
    printf("\nResultado da votacao:\n");
    printf("Candidato 1: %d votos\n", cand1);
    printf("Candidato 2: %d votos\n", cand2);
    printf("Candidato 3: %d votos\n", cand3);
    
    if (cand1 > cand2 && cand1 > cand3)
        printf("\nVENCEDOR: Candidato 1\n");
    else if (cand2 > cand1 && cand2 > cand3)
        printf("\nVENCEDOR: Candidato 2\n");
    else if (cand3 > cand1 && cand3 > cand2)
        printf("\nVENCEDOR: Candidato 3\n");
    else
        printf("\nHouve empate entre os mais votados.\n");
    
    return 0;
}