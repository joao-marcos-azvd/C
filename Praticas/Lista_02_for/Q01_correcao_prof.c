// Código de Paulo/Correção da Série de Taylor em função exponencial 

#include <stdio.h>
#include <math.h>

int main(){
    // termo -> Cada parte da série de Taylor (Ex: x²/2!)
    // soma -> Vai ser a própria Série de Taylor, junção dos termos (1/0 + x/1! + x²/2! + ... + x^n/n!)
    double x, termo = 1, soma =1.0;
    int n;
    
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    printf("Digite a quantidade de iterações (n): ");
    scanf("%d", &n);
    
    // Usando a Série de Taylor para calcular e^x
    for (int i = 1; i <= n; i++) {
        termo = termo * (x/n);
        soma += termo;
    }
    
    printf("Aproximação de e^%.1lf: %lf \t base e^%.1lf = %lf \n", x, soma, exp(x), x);
    return 0;
}
