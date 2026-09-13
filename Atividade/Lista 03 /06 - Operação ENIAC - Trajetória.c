#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double v0, graus, rad;
    double vx, vy;
    double x = 0, y = 0;
    double tempo = 0;
    double g = 9.8;
    double k = 0.5;
    double dt = 0.01;
    double pi = 3.141592;

    printf("Digite a velocidade inicial: ");
    scanf("%lf", &v0);

    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);

    rad = graus * (pi / 180);

    vx = v0 * cos(rad);
    vy = v0 * sin(rad);

    do {
        x = x + vx * dt;
        y = y + vy * dt;

        vx = vx - (k * vx * dt);
        vy = vy - ((g + k * vy) * dt);

        tempo = tempo + dt;

    } while (y > 0);

    printf("\nAlcance maximo: %.2lf metros\n", x);
    printf("Tempo de voo: %.2lf segundos\n", tempo);

    return 0;
}
