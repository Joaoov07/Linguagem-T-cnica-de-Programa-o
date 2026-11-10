#include <stdio.h>
#include <stdlib.h>

int main() {
    float notas[10];
    int aluno;
    int i;

    printf("Insira a nota bimestral dos 10 alunos:\n");
    for (i = 0; i < 10; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("\nDigite o numero do aluno cuja nota deseja ver (1 a 10): ");
    scanf("%d", &aluno);

    if (aluno >= 1 && aluno <= 10) {
        printf("Nota do aluno %d : %.2f\n", aluno, notas[aluno - 1]);
    } else {
        printf("Numero de aluno invalido! Deve ser entre 1 e 10.\n");
    }

    return 0;
}
