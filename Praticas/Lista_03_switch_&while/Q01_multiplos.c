/******************************************************************************
            Laboratório 03 (28/09/2026 - Segunda): Questão 01
*******************************************************************************/
#include <stdio.h>

int main() {
    int intervalo_n, opcao;
    
    printf("Escolha o intervalo N: ");
    scanf("%d", &intervalo_n);
    
    // O While vai servir para que o menu apareça até o usuário digitar uma valor das opções (1, 2 ou 3)
    while (opcao != 1 && opcao != 2 && opcao != 3) {
        
        printf("\n1. Multiplo de 2; \n2. Multiplo de 3; \n3. Multiplo de 5. \nOPÇÃO: ");
        scanf("%d", &opcao);
        
        // Esse contador serve para saber quantas vezes o for aconteceu e dizer quantos termos são múltiplos de N
        int contador=0;
        
        // O switch vai servir para indicar qual ação sera executada ao depender da opção escolhida
        switch (opcao) {
            case 1: // Se a opação for 1 (Multiplo de 2)
                printf("Os multiplos de 2 no intervalo %d são: ", intervalo_n);
                int multiplo = 2;
                for (int t=1; (multiplo * t) <= intervalo_n; t++) {
                    printf("%d ", multiplo*t);
                    contador += 1;
                }
                printf("\nQuantidade de multiplos: %d\n", contador);
                break;
            
            case 2: // Se a opação for 2  (Multiplo de 3)
                printf("Os multiplos de 3 no intervalo %d são: ", intervalo_n);
                multiplo = 3;
                for (int t=1; (multiplo * t) <= intervalo_n; t++){
                    printf("%d ", multiplo * t);
                    contador += 1;
                }
                printf("\nQuantidade de multiplos: %d\n", contador);
                break;
                
            case 3: // Se a opação for 3  (Multiplo de 5)
                printf("Os multiplos de 5 no intervalo %d são: ", intervalo_n);
                multiplo = 5;
                for (int t=1; (multiplo * t) <= intervalo_n; t++){
                    printf("%d ", multiplo * t);
                    contador += 1;
                }
                printf("\nQuantidade de multiplos: %d\n", contador);
                break;
              
            // Essa opção aqui é a que faz o código continuar no while até escolher uma opção válida
            default: // Se a opção for diferente de todas as anteriores
                printf("Opção inválida!\n");
                break;
        }
    }
    
    return 0;
}
