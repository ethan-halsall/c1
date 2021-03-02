/*
*Student ID: 201458429
*Student name: Ethan Halsall
*Email: sgehalsa@liverpool.ac.uk
*
*User: sgehalsa
*
*Problem ID: 1014
*RunID: 23617
*Result: accepted
*/

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

    /* 
    Increment by 1 from radius until its equal to radius1,
    whlist doing this we calculate the area and circumference at each interval
    and add these to the running total which is stored in a_total and c_total.
    */
    while (radius <= radius1) {
        a_total = a_total + area(radius);
        c_total = c_total + circumference(radius);
        radius++;
    }

    printf("%.3f\n%.3f", a_total, c_total);

    return 0;
}