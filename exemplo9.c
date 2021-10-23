#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra [31];

    printf(" Insira uma palavra: ");
    scanf("%[^\n]", palavra);
    strrev(palavra);
    puts(palavra);
}