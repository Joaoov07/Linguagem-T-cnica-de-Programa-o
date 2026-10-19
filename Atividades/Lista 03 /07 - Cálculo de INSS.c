#include <stdio.h>
#include <stdlib.h>

float calcularINSS(float salario) {
    float desconto;

    if (salario <= 1412.00) {
        desconto = salario * 0.075;
    }
    else if (salario <= 2666.68) {
        desconto = salario * 0.09;
    }
    else if (salario <= 4000.03) {
        desconto = salario * 0.12;
    }
    else {
        desconto = salario * 0.14;
    }

    return desconto;
}

int main(int argc, char *argv[]) {
    float salario, inss;

    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario);

    inss = calcularINSS(salario);

    printf("Desconto do INSS: R$ %.2f\n", inss);

    return 0;
}
