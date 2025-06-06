/*Lê uma matriz 2x4, depois a imprime,
  e então mostra a média de todos os
  números lidos.*/
#include <stdio.h>

double media(int[2][4]);

int main() {
    int numeros[2][4] = { 0 };

    printf("Digite os números da linha 1: ");
    scanf("%d %d %d %d", &numeros[0][0], &numeros[0][1], &numeros[0][2], &numeros[0][3]);
    printf("Digite os números da linha 2: ");
    scanf("%d %d %d %d", &numeros[1][0], &numeros[1][1], &numeros[1][2], &numeros[1][3]);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }

    printf("A média dos elementos é %.2lf\n", media(numeros));

    return 0;
}

double media(int numeros[2][4]) {
    int soma = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            soma += numeros[i][j];
        }
    }
    return soma / 8.0;
}