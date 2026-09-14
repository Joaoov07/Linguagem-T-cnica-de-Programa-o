#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

int main(int argc, char *argv[]) {
    float v0, graus, rad;
    float tempo, alcance;
    float g = 9.8;

    printf("Digite a velocidade inicial: ");
    scanf("%f", &v0);

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    rad = graus * (pi / 180.0);

    tempo = (2 * v0 * sin(rad)) / g;
    alcance = v0 * cos(rad) * tempo;

    printf("\nAlcance maximo: %.2f metros\n", alcance);
    printf("Tempo de voo: %.2f segundos\n", tempo);

    return 0;
}
