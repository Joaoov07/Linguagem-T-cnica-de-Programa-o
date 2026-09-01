#include <stdio.h>
#include <stdlib.h>

int main() {
	
    float salario, vendas, total;

    printf("Digite seu salario fixo: ");
    scanf("%f", &salario);

    printf("Digite o valor total de vendas: ");
    scanf("%f", &vendas);

    total = salario + (vendas * 0.15);

    printf("Valor total a receber: R$ %.2f\n", total);


    return 0;
}

