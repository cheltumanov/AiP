#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    double x1, x2, y1, y2, x3, y3;
    double AB, BC, AC;
    double p, S, h_A;

    printf("Введите координаты вершин треугольника (x1 y1 x2 y2 x3 y3):");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    
    AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    AC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    p = (AB + BC + AC) / 2.0;
    S = sqrt(p * (p - AB) * (p - BC) * (p - AC));
    h_A = (2.0 * S) / BC;

    printf("Длина высоты h_A = %.4f\n", h_A);

    return 0;
}