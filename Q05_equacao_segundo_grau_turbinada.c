// Equação do Segundo Grau

#include <stdio.h>
# include <math.h> // Importando uma biblioteca matemática (sqrt(), pow() e fabs())

int main () {
	// Definindo as variáveis a, b, c
	float a, b, c;
	printf("Primeiro ou do segundo Grau\n");

	// Atribuinda valores as variáveis
	printf("Valor de A: ");
	scanf("%f", &a);

	printf("Valor de B: ");
	scanf("%f", &b);

	printf("Valor de C: ");
	scanf("%f", &c);

	if (a == 0) // A equação tem apenas 1 solução X
	{
		float x = -c/b; // Criando X e atribuindo seu valor por meio da resolução da equação

		printf("\n---------------------------------------------------\n");
		printf("EQUAÇÃO: \n");
		printf("%.1fX + %.1f = 0 \n", c, b);
		printf("X = %.1f", x);
		printf("\n---------------------------------------------------\n");
	}

	else // A equação tem 2 soluções X1 e X2
	{
		float delta;
		delta = pow(b, 2) - 4 * a * c;

		if (delta >= 0)
		{
			if (delta == 0) // Tem 2 raizes iguais
			{
				float x;
				x = (-1 * b / (2*a));
                
                printf("\n---------------------------------------------------\n");
				printf("2 Raizes iguais: \n");
				printf("EQUAÇÃO: \n");
                printf("%.1fX² + %.1fx + %.1f \n", a, b, c);
				printf("X1: %.1f | X2: %.1f ", x, x);
				printf("\n---------------------------------------------------\n");
			}

			else  // Tem 2 raizes distintas
			{
				float x1, x2;
				// Calculando X1 (+):
				x1 = (-1 * b + sqrt(delta)) / (2*a);

				// Calculando X2 (-):
				x2 = (-1 * b - sqrt(delta)) / (2*a);
                
                printf("\n---------------------------------------------------\n");
				printf("2 Raizes distintas: \n");
				printf("EQUAÇÃO: \n");
                printf("%.1fX² + %.1fx + %.1f \n", a, b, c);
				printf("X1: %.1f | X2: %.1f ", x1, x2);
				printf("\n---------------------------------------------------\n");
			}
		}

		else  // Delta < 0
		{
			float real, imganiraia;
			real = (-1 * b) / (2*a); // Pegando a parte real do número
			imganiraia = sqrt(fabs(delta)) / (2 * a); // Pegando a paret imaginária do número
            
            printf("\n---------------------------------------------------\n");
			printf("Raizes complexas conjulgadas:\n");
			printf("EQUAÇÃO: \n");
            printf("%.1fX² + %.1fx + %.1f \n", a, b, c);
			printf("\n - (%.1f)/2 * %.1f +- j(%.1f**1/2)/2 * %.1f\n", b, a, delta, a);
			printf("\nParte real: %.1f | Parte Imaginária: j%.1f ", real, imganiraia);
			printf("\n---------------------------------------------------\n");
		}
	}

	return 0;
}
