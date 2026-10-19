#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float c, f;
	
	printf("Insira a temperatura em Celsius: ");
	scanf("%f", &c);
	
	f = c * (9.0/5.0) + 32.0;
	
	printf("A temperatura %.2f Celsius corresponde a %.2f Fahrenheit", c, f);
	
	return 0;
}
