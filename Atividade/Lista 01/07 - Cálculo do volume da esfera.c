#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double raio, volume;
	double pi = 3.14159;
	
	printf("Insira o valor do raio: ");
	scanf("%lf", &raio);
	
	volume = (4.0/3) * pi * raio * raio * raio;
	
	printf("VOLUME = %.3lf\n", volume);
	
	return 0;
}
