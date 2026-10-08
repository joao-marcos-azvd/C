/* Trabalhando com funções - 08/10/2026 Quinta-feira */

#include <stdio.h>

// Declarando uma função vazia
void funcaoVazia(/*Até na função void é possível passar um argumento*/) { //Esse void indica que a função não vai retornar nada
    printf("Está é uma função vazia :) \n");
    
    // Quando a função é do tipo void ela não pode ter um retorno
}

// Programa principal
int main() {
    // Chamando a função
    funcaoVazia();
    
    printf("Fim do programa principal! \n");

    return 0;
}
