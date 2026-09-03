#include <stdio.h>
#include <stdlib.h>

int main() {
	
    float n1, n2, n3, n4;
    float soma, media, produto;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);

    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &n3);

    printf("Digite o quarto valor: ");
    scanf("%f", &n4);

    soma = n1 + n2 + n3 + n4;
    media = soma / 4;
    produto = n1 * n2 * n3 * n4;

    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Produtorio: %.2f\n", produto);

    return 0;
}
