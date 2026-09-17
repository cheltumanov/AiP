#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    double h, R, r;
    double V;
    double pi = M_PI;
    printf("Введите высоту конуса, радиус нижнего основания, радиус верхнего основания (h, R, r):");
    scanf("%lf %lf %lf", &h, &R, &r);
    
    V = ((1.0/3.0) *pi *h) * (pow(R, 2) + R*r + pow(r, 2));

    printf("Обьем конуса - %.4f\n", V);

    return 0;
}