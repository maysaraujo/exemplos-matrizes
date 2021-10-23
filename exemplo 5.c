#include <stdio.h>
#include <stdlib.h>
#define DIML 4
#define DIMC 2

int main(){
    int ma[DIML][DIMC], mb[DIML][DIMC], mc[DIML][DIMC];

    printf(" \t\t\tPrimeira Matriz (matriz a)\n");
    for (int i = 0; i < DIML; i++){
        for (int j = 0; j < DIMC; j++){
            printf(" Insira o dado: ");
            scanf("%d", &ma[i][j]);
        }
    }
    printf(" \t\t\tSegunda Matriz (matriz b)\n");
    for (int i = 0; i < DIML; i++){
        for (int j = 0; j < DIMC; j++){
            printf(" Insira o dado: ");
            scanf("%d", &mb[i][j]);
        }
    }
    for (int i = 0; i < DIML; i++){
        for (int j = 0; j < DIMC; j++){
            mc[i][j] = ma[i][j] + mb[i][j]; 
        }
    }
    printf(" Imprimindo a Matriz (matriz c)");
    for (int i = 0; i < DIML; i++){
        for (int j = 0; j < DIMC; j++){
            printf(" [%3d ] ", mc[i][j]);
        }
        printf(" \n");
    }

}