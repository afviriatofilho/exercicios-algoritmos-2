/*Lê 10 números, mostra a média entre eles,
  e depois mostra, dos números lidos, os que
  são maiores e os que são menores que a média*/

#include <stdio.h>
double calcularMedia(int[]);
void maioresqMedia(int[], double);
void menoresqMedia(int[], double);

int main() {
    int numeros[10] = { 0 };

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    double media = calcularMedia(numeros);

    printf("MEDIA: %.2lf\n", media);
    printf("\n");

    printf("MAIORES QUE A MEDIA:\n");
    maioresqMedia(numeros, media);
    printf("\n");

    printf("MENORES QUE A MEDIA:\n");
    menoresqMedia(numeros, media);
    printf("\n");

    return 0;
}

double calcularMedia(int numeros[10]) {
    double aux = 0;
    for (int i = 0; i < 10; i++) {
        aux += numeros[i];
    }

    return aux / 10.0;
}

void maioresqMedia(int numeros[10], double media) {
    for (int i = 0; i < 10; i++) {
        if (numeros[i] > media) {
            printf("%d\n", numeros[i]);
        }
    }
}

void menoresqMedia(int numeros[10], double media) {
    for (int i = 0; i < 10; i++) {
        if (numeros[i] < media) {
            printf("%d\n", numeros[i]);
        }
    }
}