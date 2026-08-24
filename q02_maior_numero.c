/* Questão 02 - Maior número*/
#include <stdio.h>
int main() {
    printf("/* Questão 02 - Maior número*/\n");
    
    int num1, num2;
    
    printf("Digite o 1° número: ");
    scanf("%d", &num1);
    printf("Digite o 2° número: ");
    scanf("%d", &num2);
    
    if (num1 > num2)
        {
            printf("1° número (%d) > 2° número (%d)", num1, num2);
        }
    else if (num2 > num1)
        {
            printf("2° número (%d) > 1° número (%d)", num2, num1);
        }
    else
        {
            printf("1° número (%d) = 2° número (%d)", num1, num2);
        }

    return 0;
}
