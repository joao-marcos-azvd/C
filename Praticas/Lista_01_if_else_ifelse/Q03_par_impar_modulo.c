/* Par ou ímpar usando módulo (%)*/
#include <stdio.h>

int main(){
    printf("Par ou ímpar usando módulo (%) \n");
    
    int num_tets;
    printf("Digite um valor para ser testado: ");
    scanf("%d", &num_tets);
    
    if (num_tets % 2 == 0)
        {
            printf("O número %d é par!", num_tets);
        }
    else 
        {
            printf("O número %d é ímpar!", num_tets);
        }
    
    return 0;
}
