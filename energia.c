// Função para conversão de energia
void converterEnergia(void) {
    int opcao_entrada, opcao_saida;
    float valor;

    do {
        printf("\n-=-=- CONVERSÃO DE ENERGIA -=-=-\n");
        printf("Escolha a unidade de entrada:\n");
        printf("[1] Joules (J)\n");
        printf("[2] Quilowatt-horas (kWh)\n");
        printf("[3] Calorias (cal)\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao_entrada);

        if (opcao_entrada < 1 || opcao_entrada > 3) {
            printf("Opção inválida. Tente novamente.\n");
            continue;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        printf("\nEscolha a unidade de saída:\n");
        printf("[1] Joules (J)\n");
        printf("[2] Quilowatt-horas (kWh)\n");
        printf("[3] Calorias (cal)\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao_saida);

        if (opcao_saida < 1 || opcao_saida > 3) {
            printf("Opção inválida. Tente novamente.\n");
            continue;
        }

        if (opcao_entrada == 1) {
            if (opcao_saida == 1) {
                printf("%.2f Joules são %.2f Joules\n", valor, valor);
            } else if (opcao_saida == 2) {
                printf("%.2f Joules são %.6f kWh\n", valor, valor / 3.6e6);
            } else {
                printf("%.2f Joules são %.2f Calorias\n", valor, valor / 4.184);
            }
        } else if (opcao_entrada == 2) {
            if (opcao_saida == 1) {
                printf("%.2f kWh são %.2f Joules\n", valor, valor * 3.6e6);
            } else if (opcao_saida == 2) {
                printf("%.2f kWh são %.2f kWh\n", valor, valor);
            } else {
                printf("%.2f kWh são %.2f Calorias\n", valor, (valor * 3.6e6) / 4.184);
            }
        } else {
            if (opcao_saida == 1) {
                printf("%.2f Calorias são %.2f Joules\n", valor, valor * 4.184);
            } else if (opcao_saida == 2) {
                printf("%.2f Calorias são %.6f kWh\n", valor, (valor * 4.184) / 3.6e6);
            } else {
                printf("%.2f Calorias são %.2f Calorias\n", valor, valor);
            }
        }

        printf("\nDeseja realizar outra conversão de energia? (1 - Sim / 0 - Não): ");
        scanf("%d", &opcao_entrada);
    } while (opcao_entrada == 1);
}
