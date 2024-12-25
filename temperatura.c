#include <stdio.h>

// Funções de conversão de temperatura
double celsius_para_kelvin(double c) {
    return c + 273.15;
}

double celsius_para_fahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

double kelvin_para_celsius(double k) {
    return k - 273.15;
}

double kelvin_para_fahrenheit(double k) {
    return (k - 273.15) * 9.0 / 5.0 + 32;
}

double fahrenheit_para_celsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

double fahrenheit_para_kelvin(double f) {
    return (f - 32) * 5.0 / 9.0 + 273.15;
}

int main() {
    double valor, resultado;
    int opcao_origem, opcao_destino;

    printf("Digite o valor da temperatura: ");
    scanf("%lf", &valor);

    printf("Selecione a unidade da temperatura que deseja converter:\n");
    printf("1: Celsius (°C)\n");
    printf("2: Kelvin (K)\n");
    printf("3: Fahrenheit (°F)\n");
    printf("Escolha a unidade de origem (1-3): ");
    scanf("%d", &opcao_origem);

    printf("Selecione a unidade para a qual deseja converter:\n");
    printf("1: Celsius (°C)\n");
    printf("2: Kelvin (K)\n");
    printf("3: Fahrenheit (°F)\n");
    printf("Escolha a unidade de destino (1-3): ");
    scanf("%d", &opcao_destino);

    switch (opcao_origem) {
        case 1:
            switch (opcao_destino) {
                case 1:
                    resultado = valor;
                    break;
                case 2:
                    resultado = celsius_para_kelvin(valor);
                    break;
                case 3:
                    resultado = celsius_para_fahrenheit(valor);
                    break;
                default:
                    printf("Opção inválida!\n");
                    return 1;
            }
            break;
        case 2:
            switch (opcao_destino) {
                case 1:
                    resultado = kelvin_para_celsius(valor);
                    break;
                case 2:
                    resultado = valor;
                    break;
                case 3:
                    resultado = kelvin_para_fahrenheit(valor);
                    break;
                default:
                    printf("Opção inválida!\n");
                    return 1;
            }
            break;
        case 3:
            switch (opcao_destino) {
                case 1:
                    resultado = fahrenheit_para_celsius(valor);
                    break;
                case 2:
                    resultado = fahrenheit_para_kelvin(valor);
                    break;
                case 3:
                    resultado = valor;
                    break;
                default:
                    printf("Opção inválida!\n");
                    return 1;
            }
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("Resultado da conversão: %.2f\n", resultado);
    return 0;
}
