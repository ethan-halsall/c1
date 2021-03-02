#include <stdio.h>

const double PI = 3.14;

double area(int radius){
  return  PI * (radius * radius);
}

double circumference(int radius){
    return 2 * PI * radius;
}

int main () {
    int radius, radius1 = 0;
    double c_total, a_total = 0;

    /* Get input file from command line. */
    scanf("%d%d", &radius, &radius1);

    while (radius <= radius1) {
        a_total = a_total + area(radius);
        c_total = c_total + circumference(radius);
        radius++;
    }

    printf("%.3f\n%.3f", a_total, c_total);

    return 0;
}