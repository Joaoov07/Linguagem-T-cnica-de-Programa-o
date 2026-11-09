#include <stdio.h>
#include <stdlib.h>

int verificarPrimo(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int numeros[100];
    int i;

    for (i = 0; i < 100; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nResultado da verificacao:\n");

    for (i = 0; i < 100; i++) {
        printf("\nNumero: %d", numeros[i]);

        if (numeros[i] % 2 == 0) {
            printf("\nParidade: Par");
        } else {
            printf("\nParidade: Impar");
        }

        if (verificarPrimo(numeros[i]) == 1) {
            printf("\nPrimalidade: Primo\n");
        } else {
            printf("\nPrimalidade: Nao primo\n");
        }
    }

    return 0;
}
