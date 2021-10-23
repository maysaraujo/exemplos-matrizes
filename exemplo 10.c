#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome1[51];
    char nome2[51];

    fflush(stdin);
    printf(" Insira o primeiro nome: ");
    scanf("%[^\n]", nome1);
    fflush(stdin);
    printf(" Insira o segundo nome: ");
    scanf("%[^\n]", nome2);

    if (strcmp(nome1, nome2) < 0){
        printf(" Primeiro nome vem antes\n");
    }else {
        if (strcmp(nome1, nome2) == 0){
            printf(" Sao palavras iguais\n");
        }else {
            printf(" Segundo nome vem antes\n");
        }
    }
}