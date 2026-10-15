/******************************************************************************
                15/10/2026 - Calculando √2 
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void) {
    double A = 2.0;
    double x_anterior = 1.0, x_novo, erro;
    double epsilon = 1e-6;
    int max_iter = 10;
    
    for (int k = 0; k < max_iter; k++) {
        x_novo = 0.5 * (x_anterior + A /x_anterior); // Calcula a raiz por meio das iterações
        erro = fabs(x_novo - x_anterior); // Calcula o valor absoluto do erro por meio da biblioteca fabs
        
        // Analisa se o erro é menor que o epsilon
        if (erro < epsilon) {
            x_anterior = x_novo;
            break;
        }
        
        x_anterior = x_novo; // Substitui o valor de x_anterior por x_novo
    }
    
    printf("sqrt(%f) = %.10f\n", A, x_novo);

    return 0;
}
