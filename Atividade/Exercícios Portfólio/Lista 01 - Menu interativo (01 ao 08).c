#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int opcao;
	
	printf("===== MENU LISTA 1 =====\n");
	printf("1 - Ordem inversa\n");
	printf("2 - Notacao cientifica\n");
	printf("3 - Valor em binario\n");
	printf("4 - Salario com comissao\n");
	printf("5 - Soma, media e produtorio\n");
	printf("6 - Conversao de dias\n");
	printf("7 - Volume de uma esfera\n");
	printf("8 - Distancia entre dois pontos\n");
	printf("0 - Sair\n");
	printf("Escolha uma opcao: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:{
			int n1, n2;
			
			printf("Entre com dois valores: ");
			scanf("%d %d", &n1, &n2);
			
			printf("Ordem inversa: %d %d\n", n2, n1);
			break;
		}
		
		case 2:{
			double valor;
			
			printf("Insira um valor: ");
			scanf("%lf", &valor);
			
			printf("Valor em notacao cientifica: %e\n", valor);
			break;
		}
		
		case 3:{
			int n;
			
			printf("Digite um numero de 1 a 64: ");
			scanf("%d", &n);
			
			printf("Valor em binario: ");
			
			if(n >= 64){
				printf("1");
				n = n - 64;
			}else{
				printf("0");
			}
			
			if(n >= 32){
				printf("1");
				n = n - 32;
			}else{
				printf("0");
			}
			
			if(n >= 16){
				printf("1");
				n = n - 16;
			}else{
				printf("0");
			}
			
			if(n >= 8){
				printf("1");
				n = n - 8;
			}else{
				printf("0");
			}
			
			if(n >= 4){
				printf("1");
				n = n - 4;
			}else{
				printf("0");
			}
			
			if(n >= 2){
				printf("1");
				n = n - 2;
			}else{
				printf("0");
			}
			
			if(n >= 1){
				printf("1");
			}else{
				printf("0");
			}
			
			printf("\n");
			break;
		}
		
		case 4:{
			float salario, vendas, total;
			
			printf("Digite seu salario fixo: ");
			scanf("%f", &salario);
			
			printf("Digite o valor total de vendas: ");
			scanf("%f", &vendas);
			
			total = salario + (vendas * 0.15);
			
			printf("Valor total a receber: R$ %.2f\n", total);
			break;
		}
		
		case 5:{
			float n1, n2, n3, n4;
			float soma, media, produto;
			
			printf("Digite o primeiro valor: ");
			scanf("%f", &n1);
			
			printf("Digite o segundo valor: ");
			scanf("%f", &n2);
			
			printf("Digite o terceiro valor: ");
			scanf("%f", &n3);
			
			printf("Digite o quarto valor: ");
			scanf("%f", &n4);
			
			soma = n1 + n2 + n3 + n4;
			media = soma / 4;
			produto = n1 * n2 * n3 * n4;
			
			printf("Soma: %.2f\n", soma);
			printf("Media: %.2f\n", media);
			printf("Produtorio: %.2f\n", produto);
			break;
		}
		
		case 6:{
			int dias, anos, meses;
			
			printf("Digite a quantidade de dias: ");
			scanf("%d", &dias);
			
			anos = dias / 365;
			dias = dias % 365;
			
			meses = dias / 30;
			dias = dias % 30;
			
			printf("%d ano(s)\n", anos);
			printf("%d mes(es)\n", meses);
			printf("%d dia(s)\n", dias);
			break;
		}
		
		case 7:{
			double raio, volume;
			double pi = 3.14159;
			
			printf("Insira o valor do raio: ");
			scanf("%lf", &raio);
			
			volume = (4.0 / 3) * pi * raio * raio * raio;
			
			printf("VOLUME = %.3lf\n", volume);
			break;
		}
		
		case 8:{
			int x1, x2, y1, y2;
			float dist, cat1, cat2;
			
			printf("Entre com os valores para p1(x1,y1): ");
			scanf("%d %d", &x1, &y1);
			
			printf("Entre com os valores para p2(x2,y2): ");
			scanf("%d %d", &x2, &y2);
			
			cat1 = pow((x2 - x1), 2);
			cat2 = pow((y2 - y1), 2);
			
			dist = sqrt(cat1 + cat2);
			
			printf("Distancia: %.2f\n", dist);
			break;
		}
		
		case 0:
			printf("Saindo...\n");
			break;
			
		default:
			printf("Opcao invalida!\n");
	}
	
	return 0;
}
