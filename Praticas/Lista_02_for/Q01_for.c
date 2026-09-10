// Lista de laços de repetição (for) -  Questão 01
// Série de Taylor em função exponencial 

//  AJEITAR EM CASA ! 
#include <stdio.h>
#include <math.h>

int main()
{   
    double x, e = 1, fatorial = 1;
    int i, n;
    
    printf("Tentando se aproximar do valor de e ** x \n");
    
    // pegando o valor da exponencia (x)
    printf("Entre com a exponencial (x): ");
    scanf("%lf", &x);
    
    // Pegando a quantidade de termos para a série de Taylor (n)
    printf("Entre com a quantidade de termos para a Série de Taylor (n): ");
    scanf("%d", &n);
    
    
    // O ERRO TÁ AQUI NO FOR! 
    for (i = 1; i <= n; i++) {
        printf("%d", i);
        fatorial *= x / i;
        e += fatorial;
    }
    
    printf("%.2f", e);
    
    return 0;
}
