#include <stdio.h>

void converterComprimento(void) {
    float valor, resultado;
    int unidadeOrigem, unidadeDestino;

    // Solicita ao usuario a unidade de medida inicial
    printf("\nQual eh a unidade de medida inicial?\n");
    printf("1. Metros (m)\n");
    printf("2. Centimetros (cm)\n");
    printf("3. Milimetros (mm)\n");
    printf("Escolha uma opcao (1, 2 ou 3): ");
    scanf("%d", &unidadeOrigem);

    // Solicita ao usuario o valor na unidade escolhida
    printf("\nDigite o valor a ser convertido: ");
    scanf("%f", &valor); //Armazena o valor na variavel valor

    // Solicita ao usuario a unidade para a qual deseja converter
    printf("\nPara qual unidade voce quer converter?\n");
    printf("1. Metros (m)\n");
    printf("2. Centimetros (cm)\n");
    printf("3. Milimetros (mm)\n");
    printf("Escolha uma opcao (1, 2 ou 3): ");
    scanf("%d", &unidadeDestino);//Armazena a unidade final na variavel unidadeDestino 

    // Conversao com base nas escolhas
    if (unidadeOrigem == 1 && unidadeDestino == 2) {
        resultado = valor * 100; // Metros para centimetros
        printf("%.2f metros equivalem a %.2f centimetros.\n", valor, resultado);
    } else if (unidadeOrigem == 1 && unidadeDestino == 3) {
        resultado = valor * 1000; // Metros para milimetros
        printf("%.2f metros equivalem a %.2f milimetros.\n", valor, resultado);
    } else if (unidadeOrigem == 2 && unidadeDestino == 1) {
        resultado = valor / 100; // Centimetros para metros
        printf("%.2f centimetros equivalem a %.2f metros.\n", valor, resultado);
    } else if (unidadeOrigem == 2 && unidadeDestino == 3) {
        resultado = valor * 10; // Centimetros para milimetros
        printf("%.2f centimetros equivalem a %.2f milimetros.\n", valor, resultado);
    } else if (unidadeOrigem == 3 && unidadeDestino == 1) {
        resultado = valor / 1000; // Milimetros para metros
        printf("%.2f milimetros equivalem a %.2f metros.\n", valor, resultado);
    } else if (unidadeOrigem == 3 && unidadeDestino == 2) {
        resultado = valor / 10; // Milimetros para centimetros
        printf("%.2f milimetros equivalem a %.2f centimetros.\n", valor, resultado);
    } else if (unidadeOrigem == unidadeDestino) {
        printf("O valor permanece o mesmo: %.2f.\n", valor); // Nenhuma conversao necessaria
    } else {
        printf("opcao invalida. Por favor, escolha unidades validas.\n");
    }
}

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
