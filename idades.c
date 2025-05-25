/*Lê 10 idades e fornece a maior idade, a menor,
  a idade média, e a quantidade de idades acima
  da média.*/

#include <stdio.h>

int maiorIdade(int[]);
int menorIdade(int[]);
int idadeMedia(int[]);
int acimaDaMedia(int[], int);

int main() {
    int idades[10] = { 0 };

    for (int i = 0; i < 10; i++) {
        scanf("%d", &idades[i]);
    }

    printf("\n");
    printf("MAIOR %d\n", maiorIdade(idades));
    printf("MENOR %d\n", menorIdade(idades));
    int im = idadeMedia(idades);
    printf("MEDIA %d\n", im);
    printf("%d ACIMA DA MEDIA\n", acimaDaMedia(idades, im));

    return 0;
}

int maiorIdade(int idades[10]) {
    int resultado = idades[0];
    for (int i = 0; i < 10; i++) {
        if (idades[i] > resultado) {
            resultado = idades[i];
        }
    }
    return resultado;
}

int menorIdade(int idades[10]) {
    int resultado = idades[0];
    for (int i = 0; i < 10; i++) {
        if (idades[i] < resultado) {
            resultado = idades[i];
        }
    }
    return resultado;
}

int idadeMedia(int idades[10]) {
    int somatoria = 0;
    int resultado = 0;
    for (int i = 0; i < 10; i++) {
        somatoria += idades[i];
    }
    return (somatoria / 10);
}

int acimaDaMedia(int idades[10], int media) {
    int resultado = 0;
    for (int i = 0; i < 10; i++) {
        if (idades[i] > media) {
            resultado++;
        }
    }
    return resultado;
}