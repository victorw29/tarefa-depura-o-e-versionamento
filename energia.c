// Função para conversão de energia
void converterEnergia(void) {
    int opcao_entrada, opcao_saida; // Variáveis para armazenar as opções de entrada e saída
    float valor; // Variável para armazenar o valor a ser convertido

    do {
        // Exibe o menu para o usuário selecionar a unidade de entrada
        printf("\n-=-=- CONVERSÃO DE ENERGIA -=-=-\n");
        printf("Escolha a unidade de entrada:\n");
        printf("[1] Joules (J)\n");
        printf("[2] Quilowatt-horas (kWh)\n");
        printf("[3] Calorias (cal)\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao_entrada);

        // Valida se a unidade de entrada é válida
        if (opcao_entrada < 1 || opcao_entrada > 3) {
            printf("Opção inválida. Tente novamente.\n");
            continue; 
        }

        // Solicita o valor a ser convertido
        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        // Exibe o menu para o usuário selecionar a unidade de saída
        printf("\nEscolha a unidade de saída:\n");
        printf("[1] Joules (J)\n");
        printf("[2] Quilowatt-horas (kWh)\n");
        printf("[3] Calorias (cal)\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao_saida);

        // Valida se a unidade de saída é válida
        if (opcao_saida < 1 || opcao_saida > 3) {
            printf("Opção inválida. Tente novamente.\n");
            continue; 
        }

        // Realiza a conversão com base na unidade de entrada e saída selecionada
        if (opcao_entrada == 1) { // Entrada em Joules
            if (opcao_saida == 1) {
                printf("%.2f Joules são %.2f Joules\n", valor, valor); // Mesma unidade
            } else if (opcao_saida == 2) {
                printf("%.2f Joules são %.6f kWh\n", valor, valor / 3.6e6); // Joules para kWh
            } else {
                printf("%.2f Joules são %.2f Calorias\n", valor, valor / 4.184); // Joules para Calorias
            }
        } else if (opcao_entrada == 2) { // Entrada em Quilowatt-horas
            if (opcao_saida == 1) {
                printf("%.2f kWh são %.2f Joules\n", valor, valor * 3.6e6); // kWh para Joules
            } else if (opcao_saida == 2) {
                printf("%.2f kWh são %.2f kWh\n", valor, valor); // Mesma unidade
            } else {
                printf("%.2f kWh são %.2f Calorias\n", valor, (valor * 3.6e6) / 4.184); // kWh para Calorias
            }
        } else { // Entrada em Calorias
            if (opcao_saida == 1) {
                printf("%.2f Calorias são %.2f Joules\n", valor, valor * 4.184); // Calorias para Joules
            } else if (opcao_saida == 2) {
                printf("%.2f Calorias são %.6f kWh\n", valor, (valor * 4.184) / 3.6e6); // Calorias para kWh
            } else {
                printf("%.2f Calorias são %.2f Calorias\n", valor, valor); // Mesma unidade
            }
        }

        // Pergunta ao usuário se deseja realizar outra conversão
        printf("\nDeseja realizar outra conversão de energia? (1 - Sim / 0 - Não): ");
        scanf("%d", &opcao_entrada);
    } while (opcao_entrada == 1); 
}
