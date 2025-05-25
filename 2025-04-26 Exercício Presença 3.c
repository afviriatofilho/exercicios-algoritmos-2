#include <stdio.h>

double celsius(double);

int main() {
    double temperatura = 0;
    scanf("%lf", &temperatura);
    printf("%.2lf\n", celsius(temperatura));
    
    return 0;
}

double celsius(double temperatura) {
    return (5 / 9.0) * (temperatura - 32);
}