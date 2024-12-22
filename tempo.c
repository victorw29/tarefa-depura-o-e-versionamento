#include <stdio.h>

void converterTempo(void) {
    // Unidades de tempo disponíveis
    enum Unidades {
        HORAS = 1, MINUTOS, SEGUNDOS
    };
    const int NUM_UNIDADES = 3;

    int unidadeOrigem, unidadeDestino;
    float valor, resultado;

    // Pedir ao usuário a unidade que se deseja converter
    printf("\nQual eh a unidade de medida inicial?\n");
    printf("1. Horas\n");
    printf("2. Minutos\n");
    printf("3. Segundos\n");
    do { 
        printf("Escolha uma opcao (1 a %i): ", NUM_UNIDADES);
        scanf("%i", &unidadeOrigem);
    } while (unidadeOrigem < 1 || unidadeOrigem > NUM_UNIDADES); // Garantir input válido

    // Pedir o valor (em unidade escolhida) ao usuário
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    // Pedir ao usuário para qual unidade o valor deve ser convertido
    printf("Converter para qual unidade?\n");
    printf("1. Horas\n");
    printf("2. Minutos\n");
    printf("3. Segundos\n");
    do { 
        printf("Escolha uma opcao (1 a %i): ", NUM_UNIDADES);
        scanf("%i", &unidadeDestino);
    } while (unidadeDestino < 1 || unidadeDestino > NUM_UNIDADES); // Garantir input válido

    // Converter valor dado para a unidade escolhida (se diferente) e mostrar resultado
    resultado = valor;
    if (unidadeOrigem != unidadeDestino) {
        switch (unidadeOrigem) {
            case HORAS:
                if (unidadeDestino == SEGUNDOS) {
                    resultado *= 3600; // Horas para segundos
                    printf("%.2f horas equivalem a %.2f segundos\n", valor, resultado);
                }
                else if (unidadeDestino == MINUTOS) {
                    resultado *= 60; // Horas para minutos
                    printf("%.2f horas equivalem a %.2f minutos\n", valor, resultado);
                }
            case MINUTOS:
                if (unidadeDestino == SEGUNDOS) {
                    resultado *= 60; // Minutos para segundos
                    printf("%.2f minutos equivalem a %.2f segundos\n", valor, resultado);
                }
                else if (unidadeDestino == HORAS) {
                    resultado /= 60.0; // Minutos para horas
                    printf("%.2f minutos equivalem a %.2f horas\n", valor, resultado);
                }
                break;
            case SEGUNDOS:
                if (unidadeDestino == MINUTOS) {
                    resultado /= 60.0; // Segundos para minutos
                    printf("%.2f segundos equivalem a %.2f minutos\n", valor, resultado);
                }
                else if (unidadeDestino == HORAS) {
                    resultado /= 3600.0;
                    printf("%.2f segundos equivalem a %.2f horas\n", valor, resultado);
                }
                break;
        }
    }
    else {
        printf("Valor permanece o mesmo: %.2f\n", resultado); // Mesma unidade não precisa ser convertida
    }
}
