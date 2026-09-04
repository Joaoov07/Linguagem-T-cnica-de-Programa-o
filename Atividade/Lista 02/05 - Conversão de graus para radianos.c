#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double g, r;
	double p = 3.141592;
	
	printf("Insira o angulo em graus: ");
	scanf("%lf", &g);
	
	r = g * p / 180;
	
	printf("Angulo em radianos: %.6lf\n", r);
	
	return 0;
}
