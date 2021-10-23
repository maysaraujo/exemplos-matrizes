#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome [] = "Maysa";
    char sobrenome [] = "Fernanda";
    char completo [61] = {0};
    strcpy(completo, nome);
    strcat(completo, " ");
    strcat(completo, sobrenome);
    puts(completo);
}