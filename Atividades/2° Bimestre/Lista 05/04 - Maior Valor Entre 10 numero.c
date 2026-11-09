#include <stdio.h>
#include <stdlib.h>

int maiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {
    int numeros[10];
    int i, maior;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = maiorAB(numeros[0], numeros[1]);

    for (i = 2; i < 10; i++) {
        maior = maiorAB(maior, numeros[i]);
    }

    printf("\n%d eh o maior\n", maior);

    return 0;
}
