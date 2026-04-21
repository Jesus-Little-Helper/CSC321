/*Name: Esthepanie Izaguirre
* CSC 321
* Lab 11*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double hypotenuse(double b, double h);

int main(void)
{
    double base = 0, height = 0, result = 0;

    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);

    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);

    result = hypotenuse(base, height);

    printf("The hypotenuse of the triangle with base = %.2lf and height = %.2lf is %.2lf\n", base, height, result);

    return EXIT_SUCCESS;
}

double hypotenuse(double b, double h)
{
    double c = sqrt((b * b) + (h * h));
    return c;
}
