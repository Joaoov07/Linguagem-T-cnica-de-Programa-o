#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, binario[7], i = 0;

    printf("Digite um numero positivo (ate 64): ");
    scanf("%d", &n);

    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Valor em binario: ");

    for (i = i - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }

    printf("\n");

    return 0;
}
