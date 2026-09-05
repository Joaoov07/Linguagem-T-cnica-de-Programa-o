#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int opcao;
    
    printf("===== MENU LISTA 2 =====\n");
    printf("1 - Ano de nascimento\n");
    printf("2 - Conversao de km/h para m/s\n");
    printf("3 - Conversao de reais para dolares\n");
    printf("4 - Celsius para Fahrenheit\n");
    printf("5 - Graus para radianos\n");
    printf("6 - Antecessor e sucessor\n");
    printf("7 - Divisao do premio\n");
    printf("8 - Conversao de segundos\n");
    printf("9 - Combustivel da viagem\n");
    printf("10 - Maior entre tres valores\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1:{
            int idade, ano_atual, ano_nascimento;
            
            ano_atual = 2026;
            
            printf("Digite sua idade: ");
            scanf("%d", &idade);
            
            ano_nascimento = ano_atual - idade;
            
            printf("Nasceu em: %d\n", ano_nascimento);
            
            break;
        }
        
        case 2:{
            float k, m;
            
            printf("Digite a velocidade em km/h: ");
            scanf("%f", &k);
            
            m = k / 3.6;
            
            printf("Velocidade em m/s: %.2f\n", m);
            
            break;
        }
        
        case 3:{
            float reais, cotacao, dolares;
            
            printf("Digite o valor em reais: ");
            scanf("%f", &reais);
            
            printf("Digite a cotacao do dolar: ");
            scanf("%f", &cotacao);
            
            dolares = reais / cotacao;
            
            printf("Valor em dolares: %.2f\n", dolares);
            
            break;
        }
        
        case 4:{
            float c, f;
            
            printf("Insira a temperatura em Celsius: ");
            scanf("%f", &c);
            
            f = c * (9.0/5.0) + 32.0;
            
            printf("A temperatura %.2f Celsius corresponde a %.2f Fahrenheit\n", c, f);
            
            break;
        }
        
        case 5:{
            double g, r;
            double p = 3.141592;
            
            printf("Insira o angulo em graus: ");
            scanf("%lf", &g);
            
            r = g * p / 180;
            
            printf("Angulo em radianos: %.6lf\n", r);
            
            break;
        }
        
        case 6:{
            int n, antecessor, sucessor;
            
            printf("Entre com o valor de N: ");
            scanf("%d", &n);
            
            sucessor = n + 1;
            antecessor = n - 1;
            
            printf("O numero %d, seu antecessor %d e seu sucessor %d\n", n, antecessor, sucessor);
            
            break;
        }
        
        case 7:{
            double valor = 780000.00;
            double primeiro, segundo, terceiro;
            
            primeiro = valor * 0.46;
            segundo = valor * 0.32;
            terceiro = valor - primeiro - segundo;
            
            printf("Primeiro ganhador: R$ %.2lf\n", primeiro);
            printf("Segundo ganhador: R$ %.2lf\n", segundo);
            printf("Terceiro ganhador: R$ %.2lf\n", terceiro);
            
            break;
        }
        
        case 8:{
            int segundos, horas, minutos, segundos2;
            
            printf("Insira o tempo em segundos: ");
            scanf("%d", &segundos);
            
            horas = segundos / 3600;
            segundos2 = segundos % 3600;
            minutos = segundos2 / 60;
            segundos2 = segundos2 % 60;
            
            printf("%d:%d:%d\n", horas, minutos, segundos2);
            
            break;
        }
        
        case 9:{
            double tempo, velocidade, distancia, litros;
            
            printf("Insira o tempo gasto na viagem: ");
            scanf("%lf", &tempo);
            
            printf("Insira a velocidade media: ");
            scanf("%lf", &velocidade);
            
            distancia = tempo * velocidade;
            litros = distancia / 12;
            
            printf("Combustivel gasto: %.3lf litros\n", litros);
            
            break;
        }
        
        case 10:{
            int a, b, c, maiorTemp, maior;
            
            printf("Insira tres valores para identificar o maior: ");
            scanf("%d %d %d", &a, &b, &c);
            
            maiorTemp = ((a + b + abs(a - b)) / 2);
            
            maior = ((maiorTemp + c + abs(maiorTemp - c)) / 2);
            
            printf("O maior entre |%d|%d|%d| = %d\n", a, b, c, maior);
            
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
