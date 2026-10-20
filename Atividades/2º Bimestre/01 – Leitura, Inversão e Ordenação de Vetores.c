#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[100];
    int i, j, aux;

    for (i = 0; i < 100; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros na ordem inversa:\n");

    for (i = 99; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    for (i = 0; i < 99; i++) {
        for (j = i + 1; j < 100; j++) {
            if (numeros[i] < numeros[j]) {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    printf("\n\nNumeros do maior para o menor:\n");

    for (i = 0; i < 100; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}
