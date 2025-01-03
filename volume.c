#include <stdio.h> 

void converterVolume(void)
{
    float valor, resultado;
    int unidadeOrigem, unidadeDestino;

    // Solicita ao usuario a unidade de medida inicial
    printf("\nQual eh a unidade de medida inicial?\n");
    printf("1. Litros (L)\n");
    printf("2. Mililitros (mL)\n");
    printf("3. Metros cúbicos (m^3)\n");
    printf("Escolha uma opcao (1, 2 ou 3): ");
    scanf("%d", &unidadeOrigem);

    // Solicita ao usuario o valor na unidade escolhida
    printf("\nDigite o valor a ser convertido: ");
    scanf("%f", &valor); //Armazena o valor na variavel valor

    // Solicita ao usuario a unidade para a qual deseja converter
    printf("\nPara qual unidade voce quer converter?\n");
    printf("1. Litros (L)\n");
    printf("2. Mililitros (mL)\n");
    printf("3. Metros cúbicos (m^3)\n");
    printf("Escolha uma opcao (1, 2 ou 3): ");
    scanf("%d", &unidadeDestino);//Armazena a unidade final na variavel unidadeDestino 

    // Conversao com base nas escolhas
    if (unidadeOrigem == 1 && unidadeDestino == 2) {
        resultado = valor * 1000; // litros para mililitros
        printf("%.2f litros equivalem a %.2f mililitros.\n", valor, resultado);

    } else if (unidadeOrigem == 1 && unidadeDestino == 3) {
        resultado = valor / 1000; // litros para metros cúbicos
        printf("%.2f litros equivalem a %.2f metros cúbicos.\n", valor, resultado);

    } else if (unidadeOrigem == 2 && unidadeDestino == 1) {
        resultado = valor / 1000; // mililitros para litros
        printf("%.2f mililitros equivalem a %.2f litros.\n", valor, resultado);

    } else if (unidadeOrigem == 2 && unidadeDestino == 3) {
        resultado = valor / 1000000; // mililitros para metros cúbicos
        printf("%.2f mililitros equivalem a %.2f metros cúbicos.\n", valor, resultado);

    } else if (unidadeOrigem == 3 && unidadeDestino == 1) {
        resultado = valor * 1000; // metros cúbicos para litros
        printf("%.2f metros cúbicos equivalem a %.2f litros.\n", valor, resultado);

    } else if (unidadeOrigem == 3 && unidadeDestino == 2) {
        resultado = valor * 1000000; // metros cúbicos para mililitros
        printf("%.2f metros cúbicos equivalem a %.2f mililitros.\n", valor, resultado);

    } else if (unidadeOrigem == unidadeDestino) {
        printf("O valor permanece o mesmo: %.2f.\n", valor); // Nenhuma conversao necessaria
    } else {
        printf("opcao invalida. Por favor, escolha unidades validas.\n");
    }
}
