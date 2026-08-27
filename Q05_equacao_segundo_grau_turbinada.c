/* Equação do 2° Grau Turbinada*/

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
    
    printf("\nEquação: %.1fX² + %.1fx + %.1f \n", a, b, c);
    
    // Condições para x1 e x2
    if (delta >= 0)
        {
            if (delta > 0) // Tem 2 raizes distintas
                {
                    float x1, x2;
                    // Calculando X1 (+):
                    x1 = (-1 * b + sqrt(delta)) / (2*a);
                    
                    // Calculando X2 (-):
                    x2 = (-1 * b - sqrt(delta)) / (2*a);
                    
                    printf("\n2 Raizes distintas: \n");
                    printf("X1: %.1f | X2: %.1f ", x1, x2);
                }
        
            else  // Tem 2 raizes iguais
                {   
                    float x;
                    x = (-1 * b / (2*a));
                
                    printf("\n2 Raizes iguais: \n");
                    printf("X1: %.1f | X2: %.1f ", x, x);
                }   
        }
    
    else  // Delta < 0
        {
            float real, imganiraia; 
            real = (-1 * b) / (2*a); // Pegando a parte real do número
            imganiraia = sqrt(fabs(delta)) / 2 * a; // Pegando a paret imaginária do número
            
            // 
            printf("\nRaizes complexas conjulgadas:\n");
            printf("\n - (%.2f)/2 * %.2f +- j(%.2f**1/2)/2 * %.2f\n", b, a, delta, a);
            printf("\nParte real: %.2f | Parte Imaginária: j%.2f ", real, imganiraia);
        }
    

    return 0;
}
