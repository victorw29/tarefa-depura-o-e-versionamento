#include <stdio.h>

void converterMassa(void) {
    float valor, resultado;
    int unidadeOrigem, unidadeDestino;

    // Solicita ao usuário a unidade de medida inicial
    printf("\nQual e a unidade de medida inicial?\n");
    printf("1. Quilogramas (kg)\n");
    printf("2. Gramas (g)\n");
    printf("Escolha uma opcao (1 ou 2): ");
    scanf("%d", &unidadeOrigem);

    // Solicita ao usuário o valor na unidade escolhida
    printf("\nDigite o valor a ser convertido: ");
    scanf("%f", &valor);

    // Solicita ao usuário a unidade para a qual deseja converter
    printf("\nPara qual unidade voce quer converter?\n");
    printf("1. Quilogramas (kg)\n");
    printf("2. Gramas (g)\n");
    printf("Escolha uma opcao (1 ou 2): ");
    scanf("%d", &unidadeDestino);

    // Conversão com base nas escolhas
    if (unidadeOrigem == 1 && unidadeDestino == 2) {
        resultado = valor * 1000; // Quilogramas para gramas
        printf("%.2f quilogramas equivalem a %.2f gramas.\n", valor, resultado);
    } else if (unidadeOrigem == 2 && unidadeDestino == 1) {
        resultado = valor / 1000; // Gramas para quilogramas
        printf("%.2f gramas equivalem a %.2f quilogramas.\n", valor, resultado);
    } else if (unidadeOrigem == unidadeDestino) {
        printf("O valor permanece o mesmo: %.2f.\n", valor); // Nenhuma conversão necessária
    } else {
        printf("Opcao invalida. Por favor, escolha unidades validas.\n");
    }
}

int main() {
    converterMassa();
    return 0;
}
