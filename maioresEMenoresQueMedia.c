/*L� 10 n�meros, mostra a m�dia entre eles,
  e depois mostra, dos n�meros lidos, os que
  s�o maiores e os que s�o menores que a m�dia*/

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