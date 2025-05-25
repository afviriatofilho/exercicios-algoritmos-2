#include <stdio.h>

int fatorial(int);
double potencia(double, int);
double cosseno(double);

int main() {
    printf("--FATORIAL--\n");
    int nFat = 0;
    scanf("%d", &nFat);
    printf("O fatorial de %d é %d.\n", nFat, fatorial(nFat));

    printf("--POTÊNCIA--\n");
    double base = 0;
    int expoente = 0;
    scanf("%lf %d", &base, &expoente);
    printf("A potência %d de %.2lf é %.2lf.\n", expoente, base, potencia(base, expoente));
    
    printf("--COSSENO--\n");
    double nCos = 0;
    scanf("%lf", &nCos);
    printf("O cosseno de %.2lf é %.2lf.\n", nCos, cosseno(nCos));
    
    return 0;
}

int fatorial(int n) {
    int resultado = n;
    for (int i = n - 1; i > 1; i--) {
        resultado *= i;
    }
    return resultado;
}

double potencia(double base, int expoente) {
    double resultado = base;
    for (int i = expoente; i > 1; i--) {
        resultado *= base;
    }
    return resultado;
}

double cosseno(double n) {
    double resultado = 1;
    for (int i = 1; i <= 10; i + 2) {
        resultado -= (potencia(n, 2 * i) / fatorial(2 * i));
        resultado += (potencia(n, 2 * (i + 1)) / fatorial(2 * (i + 1)));
    }
    return resultado;
}