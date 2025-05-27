/*L� um vetor de n�meros inteiros de 10 posi��es,
  calcula a m�dia entre os n�meros lidos, depois
  guarda, em vetores diferentes, os n�meros lidos
  maiores e os menores que a m�dia, e os imprime.*/

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

    printf("M�DIA: %.2lf\n", m);
    printf("\n");

    maioresQueMedia(numeros, m);
    printf("\n");

    menoresQueMedia(numeros, m);
    printf("\n");

    return 0;
}

//Calcula a m�dia de todos os n�meros contidos no vetor numeros[10] da main()
double media(int numeros[]) {
    double aux = 0;
    for (int i = 0; i < 10; i++) {
        aux += numeros[i];
    }
    return aux / 10;
}

//Descobre os n�meros maiores que a m�dia fornecida pela main(), os guarda num vetor, e os imprime na tela
void maioresQueMedia(int numeros[], double media) {
    printf("N�MEROS MAIORES QUE A M�DIA:\n");
    
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

//Descobre os n�meros menores que a m�dia fornecida pela main(), os guarda num vetor, e os imprime na tela
void menoresQueMedia(int numeros[], double media) {
    printf("N�MEROS MENORES QUE A M�DIA:\n");

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