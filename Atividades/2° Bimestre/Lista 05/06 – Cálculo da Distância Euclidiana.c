#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcularDistancia(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    double x1[10], y1[10], x2[10], y2[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("\nDigite as coordenadas do primeiro ponto %d:\n", i + 1);
        printf("X1: ");
        scanf("%lf", &x1[i]);
        printf("Y1: ");
        scanf("%lf", &y1[i]);

        printf("\nDigite as coordenadas do segundo ponto %d:\n", i + 1);
        printf("X2: ");
        scanf("%lf", &x2[i]);
        printf("Y2: ");
        scanf("%lf", &y2[i]);
    }

    printf("\nDistancias entre os pontos:\n");

    for (i = 0; i < 10; i++) {
        printf("\nDistancia %d: %.2lf\n", i + 1, calcularDistancia(x1[i], y1[i], x2[i], y2[i]));
    }

    return 0;
}
