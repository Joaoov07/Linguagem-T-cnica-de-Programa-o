#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n1, n2;

	printf("Entre com dois valores: ");
	scanf("%d %d", &n1, &n2);

	printf("Ordem inversa: %d %d", n2, n1);

	return 0;
}

