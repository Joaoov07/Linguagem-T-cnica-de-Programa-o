#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double tempo, velocidade, distancia, litros;
	
	printf("Insira o tempo gasto na viagem: ");
	scanf("%lf", &tempo);
	
	printf("Insira a velocidade media: ");
	scanf("%lf", &velocidade);
	
	distancia = tempo * velocidade;
	litros = distancia / 12;
	
	printf("Combustivel gasto: %.3lf litros\n", litros);
	
	return 0;
}
