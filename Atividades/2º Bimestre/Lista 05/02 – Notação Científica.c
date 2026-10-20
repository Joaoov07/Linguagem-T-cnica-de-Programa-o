#include <stdio.h>
#include <stdlib.h>

int main() {
    double numero, A;
    int N = 0;

    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    A = numero;

    while (A >= 10) {
        A = A / 10;
        N++;
    }

    while (A < 1) {
        A = A * 10;
        N--;
    }

    printf("Notacao cientifica: %.6g x 10^%d\n", A, N);

    return 0;
}
