#include <stdio.h>
#include <stdlib.h>
#define DIML 3
#define DIMC 2


int main(){
    int valor [DIML][DIMC];
    
    printf(" \t\t\tEntrada de dados ");

    for (int i = 0; i < DIML; i++){
        for (int j = 0; j < DIMC; j++){
            printf(" Insira o valor das posicoes [%d][%d]: ", i + 1, j + i);
            scanf("%d", &valor[i][j]);
        }
    }

    printf(" Saida de dados\n");
    for (int i = 0; i < DIML; i++){
        for (int j = 0; j < DIMC; j++){
            printf(" %3d ", valor[i][j]);
        }
        printf(" \n");
    }

}