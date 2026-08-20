/******************************************************************************
                            Questão 01 - Positivo ou negativo 
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("--- Positivo ou negativo --- \n");
    printf("Digite um valor: ");
    scanf("%d", &num);
    if (num >= 0) {
        printf("O valor %d é POSITIVO!", num);
    }
    else {
        printf("O valor %d é NEGATIVO!", num);
    }

    return 0;
}
