#include <stdio.h>

void converterTemperatura(void) {
    double valor, resultado;
    int unidadeOrigem, unidadeDestino;

    // Solicita ao usuário a unidade de medida inicial
    printf("\nQual e a unidade de medida inicial?\n");
    printf("1. Celsius (°C)\n");
    printf("2. Kelvin (K)\n");
    printf("3. Fahrenheit (°F)\n");
    printf("Escolha uma opcao (1, 2 ou 3): ");
    scanf("%d", &unidadeOrigem);

    // Solicita ao usuário o valor na unidade escolhida
    printf("\nDigite o valor a ser convertido: ");
    scanf("%lf", &valor);

    // Solicita ao usuário a unidade para a qual deseja converter
    printf("\nPara qual unidade voce quer converter?\n");
    printf("1. Celsius (°C)\n");
    printf("2. Kelvin (K)\n");
    printf("3. Fahrenheit (°F)\n");
    printf("Escolha uma opcao (1, 2 ou 3): ");
    scanf("%d", &unidadeDestino);

    switch (unidadeOrigem) {
        case 1:
            switch (unidadeDestino) {
                case 1:
                    printf("O valor permanece o mesmo: %.2f °C.\n", valor);
                    break;
                case 2:
                    resultado = valor + 273.15; // Celsius para Kelvin
                    printf("%.2f °C equivalem a %.2f K.\n", valor, resultado);
                    break;
                case 3:
                    resultado = (valor * 9.0 / 5.0) + 32; // Celsius para Fahrenheit
                    printf("%.2f °C equivalem a %.2f °F.\n", valor, resultado);
                    break;
                default:
                    printf("Opcao invalida. Por favor, escolha unidades validas.\n");
                    break;
            }
            break;
        case 2:
            switch (unidadeDestino) {
                case 1:
                    resultado = valor - 273.15; // Kelvin para Celsius
                    printf("%.2f K equivalem a %.2f °C.\n", valor, resultado);
                    break;
                case 2:
                    printf("O valor permanece o mesmo: %.2f K.\n", valor);
                    break;
                case 3:
                    resultado = (valor - 273.15) * 9.0 / 5.0 + 32; // Kelvin para Fahrenheit
                    printf("%.2f K equivalem a %.2f °F.\n", valor, resultado);
                    break;
                default:
                    printf("Opcao invalida. Por favor, escolha unidades validas.\n");
                    break;
            }
            break;
        case 3:
            switch (unidadeDestino) {
                case 1:
                    resultado = (valor - 32) * 5.0 / 9.0; // Fahrenheit para Celsius
                    printf("%.2f °F equivalem a %.2f °C.\n", valor, resultado);
                    break;
                case 2:
                    resultado = (valor - 32) * 5.0 / 9.0 + 273.15; // Fahrenheit para Kelvin
                    printf("%.2f °F equivalem a %.2f K.\n", valor, resultado);
                    break;
                case 3:
                    printf("O valor permanece o mesmo: %.2f °F.\n", valor);
                    break;
                default:
                    printf("Opcao invalida. Por favor, escolha unidades validas.\n");
                    break;
            }
            break;
        default:
            printf("Opcao invalida. Por favor, escolha unidades validas.\n");
    }
}
