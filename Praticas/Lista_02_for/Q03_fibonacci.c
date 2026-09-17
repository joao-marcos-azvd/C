/******************************************************************************

17 de Setembro de 2026 - Sequencia de Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...

*******************************************************************************/
// TERMINAR E AJEITAR > VOU PRECISAR USAR 3 VARIÁVEIS
#include <stdio.h>

int main(){
    // Quantidade de termos da Sequencia de Fibonacci
    int quant_termos;
    printf("Digite quantos termos que você deseja que  ");
    scanf("%d", &quant_termos);
    
    // Definindo as variáveis que serão usadas para calcular a Sequencia
    int y = 1, y_ant = 0;
    
    // Aqui é para mostrar os dois primeiros termos ( 0, 1 ), já que não estamos tra
    printf("%d, %d, ", y_ant, y);
    
    for (int n=0; n<= quant_termos; n++){
        y += y_ant;
        y_ant = y;
        printf("%d, ", y);
    }
    return 0;
}
