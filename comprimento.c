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
