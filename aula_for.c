// Laços em C (for)
#include <stdio.h>

int main() {
    int n, i, soma = 0;
    printf("Digite um número: ");
    scanf("%d", &n);
    
    // Repetição:
        // i é uma variável e tem que ser definida ou dentro ou fora do for para ser udado (Onde ele vai ser definido não importa, mas tem que ser definido)
        // i = 1 > Aqui defino qual o valor que o i vai começar
        // i <= n > Condição/limite que o valor de i pode atingir dentro desse laço de repetição. EX: Vá de 1 (i = 1) até 25 (i <= 25)
        // i++ sereve para incrementar +1 em i em cada vez que o loop ocorre
        
    for (i = 1; i <= n; i++) {
        
        // printf("%d \n", i);
        soma += i;
    }
    
    printf("A soma de 1 até %d é: %d\n", n, soma);
    
    return 0;
}
