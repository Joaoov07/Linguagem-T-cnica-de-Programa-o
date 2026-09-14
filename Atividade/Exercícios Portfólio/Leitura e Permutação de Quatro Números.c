#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;

    printf("Digite 4 numeros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("Leitura: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

    printf("Permutacao: %d %d %d %d\n", b, d, a, c);

    return 0;
}

