#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double valor;
	
	printf("Insira um valor: ");
	scanf("%lf", &valor);
	
	printf("Valor em notacao cientifica: %e\n", valor);
	
	return 0;
}
