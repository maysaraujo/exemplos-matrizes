#include <stdio.h>
#include <stdlib.h>
#define DIM 7

//matriz quadrada de 7x7 com valores aleatorios entre 0 e 9
int main(){
    srand(time(NULL));
    int matriz[DIM][DIM]; 

    for (int i = 0; i < DIM; i++){
        for (int j = 0; j < DIM; j++){
            matriz[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < DIM; i++){
        for (int j = 0; j < DIM; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf(" \n");
    }
}