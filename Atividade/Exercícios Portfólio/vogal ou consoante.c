#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que receba uma letra, e verifique se ela é vogal ou consoante,
 se ela for consoante, verifique se ela é 'a' ou 'o' caso seja, mostre "aoba"
 caso seja 'i' ou 'u' mostre "lá ele". Caso contraio mostre '67' */

int main(int argc, char *argv[]) {
	char letra; 
	printf("Insira uma letra: ");
	scanf("%c", &letra);
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		if (letra == 'a' || letra =='o'){
			printf("AOBA");
		}
		if ( letra == 'i' || letra == 'u'){
			printf("LA ELE");
		}
		
	}else {
		printf("67");
	}
	printf("\n");
	
	if(letra == 'a')printf("a de AMOR");
	else if(letra == 'b')printf("a de BAIXXXIINNHOOOO");
	else if(letra == 'c')printf("a de CORACAO");
	else if(letra == 'd')printf("a de DACIO");
	
	switch (letra){
		case 'a': 
			printf(" a de AMOR");
			break;
		case 'b':
			printf(" b de Baixinho");
			break;
		case 'c':
			printf(" c de CuRACAO");
			break;
		case 'd':
			printf(" de de DEDINHO");	
			
	}
	
	return 0;
}
