/* Equação do 2° Grau */

#include <stdio.h>
# include <math.h> // Importando uma biblioteca matemática

int main()
{
    printf("-- Equação do Segundo Grau aX² + bx + c -- \n");
    
    //Pegando Valores 
    float a, b, c;
    printf("Valor de a: ");
    scanf("%f", &a);
    
    printf("Valor de b: ");
    scanf("%f", &b);
    
    printf("Valor de c: ");
    scanf("%f", &c);
    
    //Calculando delta
    float delta;
    delta = pow(b, 2) - 4 * a * c;
    
    printf("Equação: %.1fX² + %.1fx + %.1f \n", a, b, c);
    
    // Condições para x1 e x2
    float x1, x2;
    if (delta >= 0)
        {
            // Calculando X1 (+):
            x1 = (-1 * b + sqrt(delta)) / (2*a);
            
            // Calculando X2 (-):
            x2 = (-1 * b - sqrt(delta)) / (2*a);
            
            printf("Soluções: \n");
            printf("X1: %.1f  X2: %.1f ", x1, x2);
        }
    
    else  // Delta < 0
        {
            printf("Números complexos");
        }
    
    
    return 0;
}
