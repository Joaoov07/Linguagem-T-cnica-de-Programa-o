#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int vet_notas[10];
    int i, num;

    printf("Cadastre as notas dos alunos:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vet_notas[i]);
    }
    system("cls");

    printf("Qual nota deseja ver (Nº do Aluno de 0 a 9)? ");
    scanf("%d", &num);

    if (num >= 0 && num < 10) {
        printf("Nota: %d\n", vet_notas[num]);
    } else {
        printf("Nota não cadastrada\n");
    }

    return 0;
}
