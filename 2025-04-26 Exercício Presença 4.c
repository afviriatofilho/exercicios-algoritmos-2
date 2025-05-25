#include <stdio.h>

#define PI 3.14

double area(double);

int main() {
    double raio = 0;
    scanf("%lf", &raio);
    printf("%.2lf\n", area(raio));
    
    return 0;
}

double area(double r) {
    return PI * r * r;
}