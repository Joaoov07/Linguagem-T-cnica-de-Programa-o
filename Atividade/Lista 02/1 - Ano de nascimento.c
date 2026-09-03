#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade, ano_atual, ano_nascimento;
	
	ano_atual = 2026;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	ano_nascimento = ano_atual - idade;
	
	printf("Nasceu em: %d", ano_nascimento);
	
	return 0;
}

