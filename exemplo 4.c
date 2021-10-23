#include <stdio.h>
#include <stdlib.h>
#define DIML 7
#define DIMC 3

int main(){
    int vra[DIML];
    double notas[DIML][DIMC];

    for (int i = 0; i < DIML; i++){
        printf(" Dados do %d aluno\n", i + 1);
        printf(" Digite o RA do aluno: ");
        scanf("%d", &vra[i]);
        printf(" Entrada das notas do alunos de RA %d: \n", vra[i]);

        for (int j = 0; j < DIMC - 1; j++){
            printf(" Insira a %d nota do aluno: ", j + 1);
            scanf("%lf", &notas[i][j]); 
        }
        notas[i][2] = (notas[i][0] + notas[i][1]) / 2;
    }
    for (int i = 0; i < DIML; i++){
        printf(" Aluno de RA: %d obteve resultado igual a %.2lf\n", vra[i], notas[i][2]);
    }
}
