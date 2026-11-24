#include <stdio.h>

int main(void){

    //5 Tipos básicos de dados
    printf("# Os 5 tipos básicos de dados:\n");
    printf("Tamanho do tipo void: %zu bytes\n", sizeof(void));
    printf("Tamanho do tipo char: %zu bytes\n", sizeof(char));
    printf("Tamanho do tipo int: %zu bytes\n", sizeof(int));
    printf("Tamanho do tipo float: %zu bytes\n", sizeof(float));
    printf("Tamanho do tipo double: %zu bytes\n", sizeof(double));

    printf("---------------------------------------------\n");

    //Modificadores (signed, unsigned, long, short)
    //Padrão ANSI não permite (long float)
    printf("# Modificadores para os 5 tipos básicos de dados:\n");
    printf("Tamanho do tipo short int:%zu bytes\n", sizeof(short int));
    printf("Tamanho do tipo unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Tamanho do tipo signed int: %zu bytes\n", sizeof(signed int));
    printf("Tamanho do tipo long int: %zu bytes\n", sizeof(long int));
    printf("Tamanho do tipo long double: %zu bytes\n", sizeof(long double));

    return 0;
}