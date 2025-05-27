/*L� um vetor de 10 inteiros positivos,
  depois guarda em um vetor e imprime na
  tela os n�meros lidos que s�o pares,
  �mpares, e perfeitos.*/

#include <stdio.h>

void numerosPares(int[]);
void numerosImpares(int[]);
void numerosPerfeitos(int[]);

int main() {
    int numeros[10] = {0};

    for (int i = 0; i < 10; i++) {
        printf("DIGITE O N�MERO #%d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("\n");

    printf("N�MEROS PARES:\n");
    numerosPares(numeros);
    printf("\n");

    printf("N�MEROS �MPARES:\n");
    numerosImpares(numeros);
    printf("\n");

    printf("N�MEROS PERFEITOS:\n");
    numerosPerfeitos(numeros);

    return 0;
}

/*Verifica se um n�mero � par; se sim,
  o guarda num vetor auxiliar, na mesma
  posi��o que no original. Depois imprime 
 as posi��es n�o nulas do vetor auxiliar.*/
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

/*Verifica se um n�mero � �mpar; se sim,
  o guarda num vetor auxiliar, na mesma
  posi��o que no original. Depois imprime
 as posi��es n�o nulas do vetor auxiliar.*/
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

/*Obt�m os divisores de um n�mero atrav�s
  da for�a bruta, e guarda a soma deles
  numa vari�vel. Depois, verifica se essa
  soma � igual ao n�mero original (ou ao seu
  dobro), e, se sim, o guarda num vetor
  auxiliar, na mesma posi��o do vetor original.
  Depois disso, imprime as posi��es n�o nulas
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