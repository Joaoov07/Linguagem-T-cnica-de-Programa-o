#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int x1,x2,y1,y2;
	float dist, cat1, cat2;
	
	printf("\nEntre com os valores para p1(x1,y1): ");
	scanf("%d", &x1);
	scanf("%d", &y1);
	
	printf("\nEntre com os valores para p2(x2,y2): ");
	scanf("%d", &x2);
	scanf("%d", &y2);
	
	cat1 = pow ((x2-x1), 2);
	cat2 = ((y2-y1), 2);
	
	dist = sqrt(cat1+cat2);
	
	printf("Distancia: %d", dist);
	
	return 0;
}
