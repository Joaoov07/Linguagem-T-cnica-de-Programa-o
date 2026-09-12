#include <stdio.h>
#include <stdlib.h>

/* O programa recebe uma temperatura e sua grandeza (Celsius ou Fahrenheit). 
Em seguida, identifica a grandeza informada, realiza a conversão
usando a fórmula correspondente e mostra o resultado na tela. */

int main() {

    float temperatura, resultado;
    char grandeza;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    printf("Digite a grandeza (C para Celsius ou F para Fahrenheit): ");
    scanf(" %c", &grandeza);

    if (grandeza == 'C' || grandeza == 'c') {

        resultado = (temperatura * 9 / 5) + 32;

        printf("\nTemperatura convertida: %.2f F\n", resultado);

    } else if (grandeza == 'F' || grandeza == 'f') {

        resultado = (temperatura - 32) * 5 / 9;

        printf("\nTemperatura convertida: %.2f C\n", resultado);

    } else {

        printf("\nGrandeza invalida! Digite C ou F.\n");
    }

    return 0;
}

