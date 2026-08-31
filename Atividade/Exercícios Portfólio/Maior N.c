#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    printf("Insira os valores de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("%d eh o maior.\n", a);
    }
    else if (b > a && b > c) {
        printf("%d eh o maior.\n", b);
    }
    else if (c > a && c > b) {
        printf("%d eh o maior.\n", c);
    }
    else if (a == b && a == c) {
        printf("Os tres valores sao iguais.\n");
    }
    else if (a == b && a > c) {
        printf("A e B sao os maiores e sao iguais: %d\n", a);
    }
    else if (a == c && a > b) {
        printf("A e C sao os maiores e sao iguais: %d\n", a);
    }
    else if (b == c && b > a) {
        printf("B e C sao os maiores e sao iguais: %d\n", b);
    }

    return 0;
}
