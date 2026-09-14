#include <stdio.h>
#include <stdlib.h>

int main() {
    float preco, vp, pvp;

    printf("Digite o preco da acao: R$ ");
    scanf("%f", &preco);

    printf("Digite o valor patrimonial: R$ ");
    scanf("%f", &vp);

    pvp = preco / vp;

    printf("\nP/VP = %.2f\n", pvp);

    if (preco > 10.00 && pvp > 0.5) {
        printf("Recomendacao: OTIMA/COMPRA\n");
    }
    else if (preco < 1.00 && pvp < 1.0) {
        printf("Recomendacao: REGULAR\n");
    }
    else if (preco > 5.00 && pvp < 1.2) {
        printf("Recomendacao: RUIM/NAO COMPRE\n");
    }
    else if (preco < 10.00 && pvp > 0.3) {
        printf("Recomendacao: OPORTUNIDADE\n");
    }
    else if (preco > 1.00 && pvp < 0.7) {
        printf("Recomendacao: ATENCAO\n");
    }
    else {
        printf("Recomendacao: SEM CLASSIFICACAO\n");
    }

    return 0;
}

