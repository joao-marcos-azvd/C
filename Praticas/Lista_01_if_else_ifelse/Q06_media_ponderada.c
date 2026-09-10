// Calculando Média Ponderada
// 31/08/2026
#include <stdio.h>

int main()
{
    printf("MÉDIA PONDERADA \n");
    
    // Definindo pesos
    int peso1 = 2, peso2 = 3, peso3 = 5;
    
    // Definindo variáveis das notas e a média
    float nota1, nota2, nota3, media;
    
    // Pegando os valores da notas
    printf("Nota 01: ");
    scanf("%f", &nota1);
    
    printf("Nota 02: ");
    scanf("%f", &nota2);
    
    printf("Nota 03: ");
    scanf("%f", &nota3);
    
    // Calculando a média ponderada
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    
    printf("Sua média ponderada foi: %.1f \n", media);
    printf("SITUAÇÃO: ");
    
    // Verificandio a situação do aluno (Aprovado ou reprovado)
    if (media >= 6.0)
    {
       printf("Aprovado");
    }
    else if (media < 4.0)
    {
        printf("Reprovado");
    }
    else // 4 <= media < 6
    {
        printf("Recuperação");
    }

    return 0;
}
