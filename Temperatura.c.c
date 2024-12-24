#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void converterTemperatura(void){

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

    if (opcao_origem == opcao_destino) {
        resultado = valor;
    } else if (opcao_origem == 1 && opcao_destino == 2) {
        resultado = celsius_para_kelvin(valor);
    } else if (opcao_origem == 1 && opcao_destino == 3) {
        resultado = celsius_para_fahrenheit(valor);
    } else if (opcao_origem == 2 && opcao_destino == 1) {
        resultado = kelvin_para_celsius(valor);
    } else if (opcao_origem == 2 && opcao_destino == 3) {
        resultado = kelvin_para_fahrenheit(valor);
    } else if (opcao_origem == 3 && opcao_destino == 1) {
        resultado = fahrenheit_para_celsius(valor);
    } else if (opcao_origem == 3 && opcao_destino == 2) {
        resultado = fahrenheit_para_kelvin(valor);
    } else {
        printf("Opção inválida!\n");
        return 1;
    }

    printf("Resultado da conversão: %.2f\n", resultado);
    return 0;
}
}
