#include <stdio.h>

float tarifaEsgoto(float);

int main() {
    float tarifaAgua = 0;
    scanf("%f", &tarifaAgua);

    printf("%.2f\n", tarifaEsgoto(tarifaAgua));

    return 0;
}

float tarifaEsgoto(float tarifaAgua) {
    return tarifaAgua * 0.8;
}