/*Lê um vetor de números inteiros de 10 posições,
  calcula a média entre os números lidos, depois
  guarda, em vetores diferentes, os números lidos
  maiores e os menores que a média, e os imprime.*/

#include <stdio.h>

double media(int[]);
void maioresQueMedia(int[], double);
void menoresQueMedia(int[], double);

int main() {
    int numeros[10] = { 0 };

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("\n");

    double m = media(numeros);

    printf("MÉDIA: %.2lf\n", m);
    printf("\n");

    maioresQueMedia(numeros, m);
    printf("\n");

    menoresQueMedia(numeros, m);
    printf("\n");

    return 0;
}

//Calcula a média de todos os números contidos no vetor numeros[10] da main()
double media(int numeros[]) {
    double aux = 0;
    for (int i = 0; i < 10; i++) {
        aux += numeros[i];
    }
    return aux / 10;
}

//Descobre os números maiores que a média fornecida pela main(), os guarda num vetor, e os imprime na tela
void maioresQueMedia(int numeros[], double media) {
    printf("NÚMEROS MAIORES QUE A MÉDIA:\n");
    
    int aux[10] = { 0 };
    for (int i = 0; i < 10; i++) {
        if (numeros[i] > media) {
            aux[i] = numeros[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        if (aux[i] != 0) {
            printf("%d\n", aux[i]);
        }
    }
}

//Descobre os números menores que a média fornecida pela main(), os guarda num vetor, e os imprime na tela
void menoresQueMedia(int numeros[], double media) {
    printf("NÚMEROS MENORES QUE A MÉDIA:\n");

    int aux[10] = { 0 };
    for (int i = 0; i < 10; i++) {
        if (numeros[i] < media) {
            aux[i] = numeros[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        if (aux[i] != 0) {
            printf("%d\n", aux[i]);
        }
    }
}