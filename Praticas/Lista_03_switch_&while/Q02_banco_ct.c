/*              Sistema bancário (01/10/2026 Quinta-feira)         */

#include <stdio.h>
#include <stdlib.h> // Vou usar para limpar a tela do terminal (system("clear"))

int main() {
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-BEM VINDO AO BANCO DO CT!-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    float saldo=0, deposito=0, saque=0, saldo_ant, ext_deposito=0, ext_saque=0;
    int opcao; //Opção do menu, vai valer apenas para: 1, 2, 3, 4 ou 5
    
    // Laço para continuar exibindo as opções até que escolha sair (5)
    while (opcao != 5) {
        // Craindo o menu
        printf("\n\n1 - Consultar saldo; \n2 - Depositar; \n3 - Sacar; \n4 - Extrato; \n5 - Finalizar operações. \nOPÇÃO: ");
        scanf("%d", &opcao);
        system("clear"); // limpa a tela
        
        switch (opcao) {
            case 1: // Opcao = 1 (Consultar saldo)
                printf("\nSALDO R$: %.2f", saldo);
                break;
            
            case 2: // Depositar
                saldo_ant = saldo; //Aqui vai servir para a parte do depósito
                
                printf("\nVALOR DO DEPÓSITO R$: ");
                scanf("%f", &deposito);
                
                // Extrato dos depósitos efetuados
                ext_deposito += deposito;
                
                // Efetuando depósito
                saldo += deposito;
                system("clear");
                
                printf("\nDEPOSITO REALIZADO COM SUCESSO!");
                
                break;
                
            case 3: // Sacar
                saldo_ant = saldo; //Aqui vai servir para a parte do depósito
                
                printf("\nVALOR DO SAQUE R$: ");
                scanf("%f", &saque);
                system("clear");
                
                // Verificando se é possível realizar o saque com base no saldo
                if (saque > saldo) {
                    printf("\nSALDO INSUFICIENTE!");
                }
                
                else if (saque > 0) {
                    // Efetuando saque
                    saldo -= saque;
                    
                    printf("\nSAQUE REALIZADO COM SUCESSO!");
                    // Extrato para os saques efetuados
                    ext_saque += saque;
                }
                
                else {
                    printf("\nNÃO É POSSÍVEL REALIZAR ESSE SAQUE!");
                }
                break;
            
            case 4: // Extrato
                printf("\nULTIMAS OPERAÇÕES \nSaldo anterior R$: %.2f \nÚltimo deposito R$: %.2f \nÚltimo saque R$: %.2f \nTotal depositos R$: %.2f \nTotal saques R$: %.2f \nSaldo atual R$: %.2f",saldo_ant, deposito, saque, ext_deposito, ext_saque, saldo);
                break;
                
            case 5: // Sair
                printf("OBRIGADO PELA PREFERÊNCIA!");
                break; // Aqui não preciso fazer nada, pois o while já resolve isso, apena tem essa opção pra não conflitar com o default
                
            default:
                printf("OPÇÃO INVÁLIDA! ESCOLHA UMA OPÇÃO VÁLIDA!");
        }
    }
    
    return 0;
}
