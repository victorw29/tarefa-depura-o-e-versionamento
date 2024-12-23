#include <stdio.h>
#include <stdlib.h> // Necessário para usar system()

#define JOULES_PARA_KWH(joules) ((joules) / 3.6e6)    // Função para converter Joules para Quilowatt-horas (kWh)
#define JOULES_PARA_CALORIAS(joules) ((joules) / 4.184) // Função para converter Joules para Calorias (cal)
#define KWH_PARA_JOULES(kWh) ((kWh) * 3.6e6)           // Função para converter Quilowatt-horas (kWh) para Joules
#define CALORIAS_PARA_JOULES(calorias) ((calorias) * 4.184) // Função para converter Calorias (cal) para Joules

// Função para limpar a tela
void limpar_tela() {
    #ifdef _WIN32
        system("cls"); // Para Windows
    #else
        system("clear"); // Para Linux/macOS
    #endif
}

// Função principal para exibir os menus de entrada e saída e realizar as conversões
int main() {
    int opcao_entrada, opcao_saida;
    float valor;

    printf("Conversor de Energia\n");

    do {
        limpar_tela(); // Limpar a tela antes de mostrar o menu

        // Menu de entrada: escolher a unidade de entrada
        printf("Escolha a unidade de entrada:\n");
        printf("1. Joules (J)\n");
        printf("2. Quilowatt-horas (kWh)\n");
        printf("3. Calorias (cal)\n");
        printf("Digite o número da opção: ");
        scanf("%d", &opcao_entrada);

        // Verificar se a opção de entrada é válida
        if (opcao_entrada < 1 || opcao_entrada > 3) {
            printf("Opção inválida! Tente novamente.\n");
            continue;
        }

        // Obter o valor da entrada
        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        limpar_tela(); // Limpar a tela após a entrada do valor

        // Menu de saída: escolher para qual unidade deseja converter
        printf("Escolha a unidade de saída:\n");
        printf("1. Joules (J)\n");
        printf("2. Quilowatt-horas (kWh)\n");
        printf("3. Calorias (cal)\n");
        printf("Digite o número da opção: ");
        scanf("%d", &opcao_saida);

        // Verificar se a opção de saída é válida
        if (opcao_saida < 1 || opcao_saida > 3) {
            printf("Opção inválida! Tente novamente.\n");
            continue;
        }

        // Realizar a conversão com base nas opções escolhidas
        if (opcao_entrada == 1) {
            // Entrada em Joules
            if (opcao_saida == 1) {
                printf("%.2f Joules são %.2f Joules\n", valor, valor);
            } else if (opcao_saida == 2) {
                printf("%.2f Joules são %.6f kWh\n", valor, JOULES_PARA_KWH(valor));
            } else if (opcao_saida == 3) {
                printf("%.2f Joules são %.2f Calorias\n", valor, JOULES_PARA_CALORIAS(valor));
            }
        } else if (opcao_entrada == 2) {
            // Entrada em Quilowatt-horas
            if (opcao_saida == 1) {
                printf("%.2f kWh são %.2f Joules\n", valor, KWH_PARA_JOULES(valor));
            } else if (opcao_saida == 2) {
                printf("%.2f kWh são %.2f kWh\n", valor, valor);
            } else if (opcao_saida == 3) {
                printf("%.2f kWh são %.2f Calorias\n", valor, JOULES_PARA_CALORIAS(KWH_PARA_JOULES(valor)));
            }
        } else if (opcao_entrada == 3) {
            // Entrada em Calorias
            if (opcao_saida == 1) {
                printf("%.2f Calorias são %.2f Joules\n", valor, CALORIAS_PARA_JOULES(valor));
            } else if (opcao_saida == 2) {
                printf("%.2f Calorias são %.6f kWh\n", valor, JOULES_PARA_KWH(CALORIAS_PARA_JOULES(valor)));
            } else if (opcao_saida == 3) {
                printf("%.2f Calorias são %.2f Calorias\n", valor, valor);
            }
        }

        // Perguntar se o usuário quer continuar
        printf("\nDeseja realizar outra conversão? (1 - Sim / 0 - Não): ");
        scanf("%d", &opcao_entrada);

    } while (opcao_entrada == 1);  // O programa continua até o usuário escolher sair

    printf("Saindo do programa...\n");

    return 0;
}
