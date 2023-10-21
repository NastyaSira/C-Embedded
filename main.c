#include <stdio.h>
#include <math.h>

int main( ) {
    double a, B, z1, z2;

    printf("Введіть значення a: ");
    scanf("%lf", &a);
    printf("Введіть значення B: ");
    scanf("%lf", &B);

    z1 = (sin(a) + cos(2 * B - a)) / (cos(a) - sin(2 * B - a));
    z2 = (1 + sin(2 * B)) / (cos(2 * B));

  
    printf("Результат для z1: %lf\n", z1);
    printf("Результат для z2: %lf\n", z2);

    return 0;
}
