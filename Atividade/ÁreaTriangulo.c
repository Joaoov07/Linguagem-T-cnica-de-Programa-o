#include <stdio.h>
#include <stdlib.h>

int main(){

	
	float base, altura, area;
	
	printf("Digite o valor da base: \n");
	scanf("%f", &base);
	printf("Digite o valor da altura: \n");
	scanf("%f", &altura);
	area = (base * altura)/2;
	
	printf("A area do triangulo e: %0.2f", area);
	return 0;
}
