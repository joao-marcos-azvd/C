/* Funçaõ dobra valor */
#include <stdio.h>

// Criando uma função void (sem retorno) para dobrar um valor 
void dobravalor(int valor /*Recebendo o valor*/) {
    printf("Valor de entrada: %d\n", valor);
    
    valor *= 2; //Dobrando o valor
    printf("Valor * 2 = %d\n", valor);
}

// Função principal
int main() {
    int valor_p_dobrar;
    printf("Digite um valor: ");
    scanf("%d", &valor_p_dobrar);
    
    // Chamando a função para dobrar o valor
    dobravalor(valor_p_dobrar);

    return 0;
}
