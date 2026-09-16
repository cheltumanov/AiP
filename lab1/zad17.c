#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    double x1, x2, y1, y2, x3, y3;
    double a, b, c;
    double pP, P, S;

    printf("Введите координаты вершин треугольника (x1 y1 x2 y2 x3 y3):");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    
    a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    P = a + b + c;
    pP = P / 2.0;
    S = sqrt(pP * (pP - a) * (pP - b) * (pP - c));

    printf("Периметр - %.4f\n", P);
    printf("Полупериметр - %.4f\n", pP);
    printf("Площадь - %.4f\n", S);

    return 0;
}