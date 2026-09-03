#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;

    printf("Digite um numero de 1 a 64: ");
    scanf("%d", &n);

    printf("Valor em binario: ");

    if (n >= 64) {
        printf("1");
        n = n - 64;
    } else {
        printf("0");
    }

    if (n >= 32) {
        printf("1");
        n = n - 32;
    } else {
        printf("0");
    }

    if (n >= 16) {
        printf("1");
        n = n - 16;
    } else {
        printf("0");
    }

    if (n >= 8) {
        printf("1");
        n = n - 8;
    } else {
        printf("0");
    }

    if (n >= 4) {
        printf("1");
        n = n - 4;
    } else {
        printf("0");
    }

    if (n >= 2) {
        printf("1");
        n = n - 2;
    } else {
        printf("0");
    }

    if (n >= 1) {
        printf("1");
    } else {
        printf("0");
    }

    printf("\n");

    return 0;
}
