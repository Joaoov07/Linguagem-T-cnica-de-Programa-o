#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double valor = 780000.00;
	double primeiro, segundo, terceiro;
	
	primeiro = valor * 0.46;
	segundo = valor * 0.32;
	terceiro = valor - primeiro - segundo;
	
	printf("Primeiro ganhador: R$ %.2lf\n", primeiro);
	printf("Segundo ganhador: R$ %.2lf\n", segundo);
	printf("Terceiro ganhador: R$ %.2lf\n", terceiro);
	
	return 0;
}
