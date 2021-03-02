/*
*Student ID: 201458429
*Student name: Ethan Halsall
*Email: sgehalsa@liverpool.ac.uk
*
*User: sgehalsa
*
*Problem ID: 1030
*RunID: 23574
*Result: accepted
*/
#include <stdio.h>

char nth_decimal(int a, int b, int n){ 
    char ret;
    double dec_part, total = 0.0;

    /*  
    num_as_str has space for three extra chars which are -
    '0', '.' and a final char to prevent the nth decimal from being rounded 
    when we call sprintf
    */
    char num_as_str[n+3]; 
    total = (double) a / (double) b;

    /* 
    Remove the digits before the '.' 
    by subtracting the rounded int value 
    from the division from the actual value. 
    This is done to prevent overflow in the string num_as_str, 
    as '0' and '.' are 2 extra chars that will always be there
    */
    dec_part = total - (int)total;


    /* 
    Convert dec_part to string of accuracy n+1, 
    to prevent the nth value from being rounded 
    */
    sprintf(num_as_str, "%.*f", (n+1), dec_part);

    /* 
    Assign ret the character at the n+1 index of the num_as_str string,
    as num_as_str is a string its index starts at 0 so we use n+1 not n+2.
    */
    ret = num_as_str[n+1];

    return ret;
}


int main(){
    int a, b, n = 0;
    char nth;

    /* Get input file from command line. */
    scanf("%d%d%d", &a, &b, &n);

    /* Calculate the nth deicmal of a/b */
    nth = nth_decimal(a,b,n);

    /* Print the nth deicmal of a/b to the command line */
    printf("%c", nth);

    return 0;
}