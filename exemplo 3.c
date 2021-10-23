#include <stdio.h>
#include <stdlib.h>
#define DIM 3

int main(){
    char veia [DIM][DIM] = {{' ', ' ', ' '}, {' ', ' ', ' ' }, {' ', ' ', ' '}};

    for (int i = 0; i <  DIM; i++){
        for (int j = 0; j < DIM; j++){
            if (j != DIM - 1){
                printf(" %2c |", veia[i][j]);
            }else{
                printf(" %2c ", veia[i][j]);
            }
        }
        printf("  \n");
    }
}
