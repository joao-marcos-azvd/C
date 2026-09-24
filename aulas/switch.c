/******************************************************************************
                    24/09/2026 - Aprendendo Switch

Aula: https://learn.microsoft.com/pt-br/cpp/c-language/switch-statement-c?view=msvc-170
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha_fruta;
    printf("Escolha sua fruta favorita\n 1 - Maçã \n 2 - Laranja \nOpção: ");
    scanf("%d", &escolha_fruta);
    
    system("clear");
    
    // O switch serve como vários IF & ELSE, só que sendo uma forma de condençar o código
    switch (escolha_fruta) {
        // Cada case segue acompanhado de uma condição
        // Ex: "case 1" significa: caso escolha_fruta == 1: Faça tal coisa
        case 1:            
            printf("Maçã é uma fruta saudável!");
            break; // Essa parte serve para interromper a execução do resto do switch
            
        case 2:
            printf("Laranja é rica em vitamina C!");
            break;
            
        default: // Esse default serve para casos a entrada não tenha se encaixado em nem uma das condições anteriores.
            printf("Essa opção não está disponível!");
            break;
    }
    
/*
ESTRUTURA:
    switch (expression) {
      case x:
        // code block
        break; 
      case y:
        // code block
        break;
      default:
        // code block
    }
*/    
    return 0;
}
