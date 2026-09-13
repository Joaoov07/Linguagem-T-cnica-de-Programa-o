#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int saque, n100, n50, n10, n5, n2, n1;
    
    printf("Quanto deseja sacar? ");
    scanf("%d", &saque);
    
    n100 = saque / 100;
    saque = saque % 100;
    
    n50 = saque / 50;
    saque = saque % 50;
    
    n10 = saque / 10;
    saque = saque % 10;
    
    n5 = saque / 5;
    saque = saque % 5;
    
    n2 = saque / 2;
    saque = saque % 2;
    
    n1 = saque / 1;
    
    printf("\nNotas entregues:\n");
    printf("R$ 100: %d nota(s)\n", n100);
    printf("R$ 50: %d nota(s)\n", n50);
    printf("R$ 10: %d nota(s)\n", n10);
    printf("R$ 5: %d nota(s)\n", n5);
    printf("R$ 2: %d nota(s)\n", n2);
    printf("R$ 1: %d nota(s)\n", n1);
    
    return 0;
}
