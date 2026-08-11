#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(int argc, char *argv[]) {
	
	float r, area;
	
	printf("Insira o Raio R do circuito: ");
	scanf("%f", &r);
	
	area = pi *(r*r);

	printf("A area do Circuito de Raio R: %f = %f", r, area);
	
	return 0;
}
