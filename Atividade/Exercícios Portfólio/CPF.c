#include <stdio.h>
#include <stdlib.h>

/* O programa recebe um CPF com 11 números, calcula os dois dígitos verificadores
 seguindo a lógica matemática do CPF e informa se o CPF é válido ou inválido */


int main() {

    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;
    int soma, resto, digito1, digito2;

    printf("Digite os 11 numeros do CPF: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

    soma = n1 * 10 + n2 * 9 + n3 * 8 + n4 * 7 + n5 * 6 + n6 * 5 + n7 * 4 + n8 * 3 + n9 * 2;

    resto = (soma * 10) % 11;

    if (resto == 10)
        digito1 = 0;
    else
        digito1 = resto;

    soma = n1 * 11 + n2 * 10 + n3 * 9 + n4 * 8 + n5 * 7 + n6 * 6 + n7 * 5 + n8 * 4 + n9 * 3 + digito1 * 2;

    resto = (soma * 10) % 11;

    if (resto == 10)
        digito2 = 0;
    else
        digito2 = resto;

    if (n10 == digito1 && n11 == digito2)
        printf("CPF VALIDO!\n");
    else
        printf("CPF INVALIDO!\n");

    return 0;
}

