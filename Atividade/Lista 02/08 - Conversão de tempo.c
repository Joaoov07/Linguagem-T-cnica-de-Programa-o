#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int segundos, horas, minutos, segundos2;
	
	printf("Insira o tempo em segundos: ");
	scanf("%d", &segundos);
	
	horas = segundos / 3600;
	segundos2 = segundos % 3600;
	minutos = segundos2 / 60;
	segundos2 = segundos2 % 60;
	
	printf("%d:%d:%d\n", horas, minutos, segundos2);
	
	return 0;
}
