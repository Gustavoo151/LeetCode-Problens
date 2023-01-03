#include <stdio.h>

#define PI 3.14159

int main(){
    float a, b, c, areaTrian, areaCircu, areaTrape, areaQuadra, areaRatan;
    
    scanf("%f %f %f", &a, &b, &c);

    areaTrian = (a*c)/2;
    areaCircu = PI*(c*c);
    areaTrape = (a+b)*c/2;
    areaQuadra = b*b;
    areaRatan = a*b;

    printf("TRIANGULO: %.3f\n", areaTrian);
    printf("CIRCULO: %.3f\n", areaCircu);
    printf("TRAPEZIO: %.3f\n", areaTrape);
    printf("QUADRADO: %.3f\n", areaQuadra);
    printf("RETANGULO: %.3f\n", areaRatan);

    return 0;
}