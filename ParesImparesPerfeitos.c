/*Lê um vetor de 10 inteiros positivos,
  depois guarda em um vetor e imprime na
  tela os números lidos que são pares,
  ímpares, e perfeitos.*/

#include <stdio.h>

void numerosPares(int[]);
void numerosImpares(int[]);
void numerosPerfeitos(int[]);

int main() {
    int numeros[10] = {0};

    for (int i = 0; i < 10; i++) {
        printf("DIGITE O NÚMERO #%d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("\n");

    printf("NÚMEROS PARES:\n");
    numerosPares(numeros);
    printf("\n");

    printf("NÚMEROS ÍMPARES:\n");
    numerosImpares(numeros);
    printf("\n");

    printf("NÚMEROS PERFEITOS:\n");
    numerosPerfeitos(numeros);

    return 0;
}

/*Verifica se um número é par; se sim,
  o guarda num vetor auxiliar, na mesma
  posição que no original. Depois imprime 
 as posições não nulas do vetor auxiliar.*/
void numerosPares(int numeros[10]) {
    int aux[10] = { 0 };
    
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            aux[i] = numeros[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        if (aux[i] != 0) {
            printf("%d\n", aux[i]);
        }
    }
}

/*Verifica se um número é ímpar; se sim,
  o guarda num vetor auxiliar, na mesma
  posição que no original. Depois imprime
 as posições não nulas do vetor auxiliar.*/
void numerosImpares(int numeros[10]) {
    int aux[10] = { 0 };

    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 != 0) {
            aux[i] = numeros[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        if (aux[i] != 0) {
            printf("%d\n", aux[i]);
        }
    }
}

/*Obtém os divisores de um número através
  da força bruta, e guarda a soma deles
  numa variável. Depois, verifica se essa
  soma é igual ao número original (ou ao seu
  dobro), e, se sim, o guarda num vetor
  auxiliar, na mesma posição do vetor original.
  Depois disso, imprime as posições não nulas
  do vetor auxiliar.*/
void numerosPerfeitos(int numeros[]) {
    int aux[10] = { 0 };

    for (int i = 0; i < 10; i++) {
        int somaDivisores = 0;
        for (int j = 1; j <= numeros[i]; j++) {
            if (numeros[i] % j == 0) {
                somaDivisores += j;
            }
        }

        if (somaDivisores == numeros[i] || somaDivisores == 2 * numeros[i]) {
            aux[i] = numeros[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        if (aux[i] != 0) {
            printf("%d\n", aux[i]);
        }
    }
}