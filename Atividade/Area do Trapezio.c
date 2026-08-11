#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592
int main(int argc, char *argv[]) {
	
	float r, area_circulo;
	
	printf("Insira o Raio R do circuito: ");
	scanf("%f", &r);
	
	area_circulo = pi * (r*r);
	
	printf("A area do Circulo de Raio R: %.2f = %.2f", r, area_circulo);
	
	float area_trapezio, base_maior, base_menor, altura;
	
	printf("\nDigite a Base Maior: ");
	scanf("%f", &base_maior);
	
	printf("Digite a Base Menor: ");
	scanf("%f", &base_menor);
	
	printf("Digite a Altura: ");
	scanf("%f", &altura);
	
	area_trapezio = ((base_maior + base_menor) * altura) / 2;

	printf("A area do trapezio = %f", area_trapezio);
	
	return 0;
}
