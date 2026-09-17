#include <stdio.h>
#include <stdlib.h>

int main(){

    double X, A, total_cost;

    printf("Dведите цену молока X и увеличение цены A: ");
    scanf("%lf %lf", &X, &A);

    total_cost = (31 * 4 * X) + (30 * 4 * (X + A));

    printf("Общая стоимость за март и апрель = %.2f руб.\n", total_cost);

    return 0;
}