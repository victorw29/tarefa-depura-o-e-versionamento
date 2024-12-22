#include <stdio.h>

void converterPressao(void) {
    float valor, resultado;
    int unidadeOrigem, unidadeDestino;

    // Solicita ao usuário a unidade de medida inicial
    printf("\nQual e a unidade de medida inicial?\n");
    printf("1. Pascal (Pa)\n");
    printf("2. Pressão Atmosférica (atm)\n");
    printf("Escolha uma opcao (1 ou 2): ");
    scanf("%d", &unidadeOrigem);

    // Solicita ao usuário o valor na unidade escolhida
    printf("\nDigite o valor a ser convertido: ");
    scanf("%f", &valor);

    // Solicita ao usuário a unidade para a qual deseja converter
    printf("\nPara qual unidade voce quer converter?\n");
	printf("1. Pascal (Pa)\n");
    printf("2. Pressão Atmosférica (atm)\n");
    printf("Escolha uma opcao (1 ou 2): ");
    scanf("%d", &unidadeDestino);

	switch (unidadeOrigem) {
	case 1:
		switch (unidadeDestino) {
		case 1:
			printf("O valor permanece o mesmo: %.4f.\n", valor);
			break;
		case 2:
			resultado = valor / 101325; // Pascal para Pressão Atmosférica
			printf("%.4f Pa equivalem a %.4f atm.\n", valor, resultado);
			break;
		default:
			printf("Opcao invalida. Por favor, escolha unidades validas.\n");
			break;
		}
		break;
	case 2:
		switch (unidadeDestino) {
		case 1:
			resultado = valor * 101325; // Pressão Atmosférica para Pascal
			printf("%.4f atm equivalem a %.4f Pa.\n", valor, resultado);
			break;
		case 2:
			printf("O valor permanece o mesmo: %.4f.\n", valor);
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
