/******************************************************************************
            Laboratório 03 (28/09/2026 - Segunda): Questão 01
*******************************************************************************/
#include <stdio.h>

int main() {
    int intervalo_n, opcao;
    
    printf("Escolha o intervalo N: ");
    scanf("%d", &intervalo_n);
    
    while (opcao != 1 && opcao != 2 && opcao != 3) {
        printf("\n1. Multiplo de 2; \n2. Multiplo de 3; \n3. Multiplo de 5. \nOPÇÃO: ");
        scanf("%d", &opcao);
        
        int contador=0;
        switch (opcao) {
            case 1:
                printf("Os multiplos de 2 no intervalo %d são: ", intervalo_n);
                int multiplo = 2;
                for (int t=1; (multiplo * t) <= intervalo_n; t++) {
                    printf("%d ", multiplo*t);
                    contador += 1;
                }
                printf("\nQuantidade de multiplos: %d", contador);
                break;
            
            case 2: 
                printf("Os multiplos de 3 no intervalo %d são: ", intervalo_n);
                multiplo = 3;
                for (int t=1; (multiplo * t) <= intervalo_n; t++){
                    printf("%d ", multiplo * t);
                    contador += 1;
                }
                printf("\nQuantidade de multiplos: %d", contador);
                break;
                
            case 3:
                printf("Os multiplos de 5 no intervalo %d são: ", intervalo_n);
                multiplo = 5;
                for (int t=1; (multiplo * t) <= intervalo_n; t++){
                    printf("%d ", multiplo * t);
                    contador += 1;
                }
                printf("\nQuantidade de multiplos: %d", contador);
                break;
                
            default:
                printf("Opção inválida!");
                break;
        }
    }
    
    return 0;
}
