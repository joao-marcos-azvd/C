/******************************************************************************
                            Questão 01 - Positivo ou negativo 
*******************************************************************************/
#include <stdio.h>

int main()
{
    float num;
    printf("--- Positivo ou negativo --- \n");
    printf("Digite um valor: ");
    scanf("%f", &num);
    if (num > 0) {
        printf("O valor %.2f é POSITIVO!", num);
    }
    else if (num == 0) {
        printf("O valor é %.2f!", num);
    }
    else {
        printf("O valor %.2f é NEGATIVO!", num);
    }

    return 0;
}
