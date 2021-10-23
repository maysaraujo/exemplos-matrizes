#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome_completo [61];
    printf(" Insira o nome completo da pessoa: ");
    fflush(stdin);
    scanf("%[^\n]", nome_completo);
    puts(nome_completo);
    printf(" Tamanho eh %d de caracteres\n", strlen(nome_completo));
    for (int i = 0; i < strlen(nome_completo);i++){
        printf(" %c\n", nome_completo[i]);
    }
}