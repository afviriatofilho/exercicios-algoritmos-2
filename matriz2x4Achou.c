/*L� uma matriz 2x4, depois a imprime,
  e ent�o l� um n�mero, o procura na
  matriz, e imprime se esse n�mero foi
  encontrado na matriz ou n�o.*/
#include <stdio.h>

int main() {
    int achou = 0;
    int numeros[2][4] = { 0 };

    printf("Digite os n�meros da linha 1: ");
    scanf("%d %d %d %d", &numeros[0][0], &numeros[0][1], &numeros[0][2], &numeros[0][3]);
    printf("Digite os n�meros da linha 2: ");
    scanf("%d %d %d %d", &numeros[1][0], &numeros[1][1], &numeros[1][2], &numeros[1][3]);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }

    int interesse = 0;

    printf("Digite o n�mero de interesse: ");
    scanf("%d", &interesse);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            if (numeros[i][j] == interesse) {
                printf("N�mero encontrado!\n");
                achou = 1;
                break;
            }
        }
    }

    if (!achou) {
        printf("N�mero n�o encontrado.");
    }

    return 0;
}