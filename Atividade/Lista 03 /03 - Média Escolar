#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char nome[50];
    float nota1, nota2, nota3, media, falta;
    
    printf("Qual seu nome? ");
    scanf("%s", nome);
    
    printf("Qual a sua 1 nota? ");
    scanf("%f", &nota1);
    
    printf("Qual a sua 2 nota? ");
    scanf("%f", &nota2);
    
    printf("Qual a sua 3 nota? ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    if (media >= 7) {
        printf("\n%s, sua media foi %.2f e voce foi APROVADO!\n", nome, media);
    }
    else if (media >= 4) {
        falta = 10 - media;
        printf("\n%s, sua media foi %.2f e voce ficou de EXAME.\n", nome, media);
        printf("Faltam %.2f pontos para atingir 10.\n", falta);
    }
    else {
        printf("\n%s, sua media foi %.2f e voce foi REPROVADO.\n", nome, media);
    }
    
    return 0;
}
