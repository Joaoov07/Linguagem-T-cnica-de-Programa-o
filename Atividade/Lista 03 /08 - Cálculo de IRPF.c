#include <stdio.h>
#include <stdlib.h>

float calcularIRPF(float salarioBase) {
    float imposto;

    if (salarioBase <= 2259.20) {
        imposto = 0;
    }
    else if (salarioBase <= 2826.65) {
        imposto = (salarioBase * 0.075) - 169.44;
    }
    else if (salarioBase <= 3751.05) {
        imposto = (salarioBase * 0.15) - 381.44;
    }
    else if (salarioBase <= 4664.68) {
        imposto = (salarioBase * 0.225) - 662.77;
    }
    else {
        imposto = (salarioBase * 0.275) - 896.00;
    }

    return imposto;
}

int main(int argc, char *argv[]) {
    float salarioBase, irpf;

    printf("Digite o salario base: R$ ");
    scanf("%f", &salarioBase);

    irpf = calcularIRPF(salarioBase);

    printf("Valor do IRPF: R$ %.2f\n", irpf);

    return 0;
}
