#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void converterComprimento(void);
void converterVolume(void);
void converterMassa(void);
void converterTempo(void);
void converterEnergia(void);
void converterPressao(void);
void converterTemperatura(void);
void sair(void) { 
    printf("\nObrigado por usar o Conversor de Unidades!\n");
    printf("Esperamos vê-lo novamente. Até mais!\n");
}


int main(void) {
    setlocale(LC_CTYPE, "pt_BR.UTF-8"); // Configura o uso de UTF-8
    int resposta;

    do {
        printf("\n-=-=- CONVERSOR DE UNIDADES -=-=-\n");
        printf("Digite o número correspondente à opção desejada:\n");
        printf("[1] Converter Comprimento.\n");
        printf("[2] Converter Volume.\n");
        printf("[3] Converter Massa.\n");
        printf("[4] Converter Tempo.\n");
        printf("[5] Converter Energia.\n");
        printf("[6] Converter Pressão.\n");
        printf("[7] Converter Temperatura.\n");
        printf("[8] Sair.\n");
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Escolha uma opção: ");

        if (scanf("%d", &resposta) != 1) {
            printf("\nEntrada inválida. Por favor, insira um número de 1 a 8.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (resposta) {
        case 1:
            converterComprimento();
            break;
        case 2:
            converterVolume();
            break;
        case 3:
            converterMassa();
            break;
        case 4:
            converterTempo();
            break;
        case 5:
            converterEnergia();
            break;
        case 6:
            converterPressao();
            break;
        case 7:
            converterTemperatura();
            break;
        case 8:
            sair();
            break;
        default:
            printf("\nOpção inválida. Por favor, escolha um número entre 1 e 8.\n");
            break;
        }
    } while (resposta != 8);

    return 0;
}
