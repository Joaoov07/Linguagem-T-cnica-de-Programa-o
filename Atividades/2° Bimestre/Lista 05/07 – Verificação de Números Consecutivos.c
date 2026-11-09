#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[100];
    int i, encontrou = 0;

    for (i = 0; i < 100; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros consecutivos:\n");

    for (i = 0; i < 99; i++) {
        if (numeros[i + 1] == numeros[i] + 1) {
            printf("%d e %d\n", numeros[i], numeros[i + 1]);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum numero consecutivo encontrado.\n");
    }

    return 0;
}
