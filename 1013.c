/*
*Student ID: 201458429
*Student name: Ethan Halsall
*Email: sgehalsa@liverpool.ac.uk
*
*User: sgehalsa
*
*Problem ID: 1013
*RunID: 23829
*Result: accepted
*/

#include <stdio.h>

int count, count2, count3 = 0;

/* 
The function check increments one of the count values, 
dependant on whether the input is >= 85, between 85 and 
60 or less than or equal to 60.
*/ 

void check(int input) {
    if (input >= 85){
        count++;
    } else if (input > 60) {
        count2++;
    } else{
        count3++;
    }
}

int main () {
    int input = 0;

    /* 
    Read in integers from the command line,
    use a do while instead of while as input is initialised to 0,
    so we need to open the scanf so we can update the value of input 
    with a value from command line. 
    */
    do {
        scanf("%d", &input);

        /* 
        Make sure the input is not equal to zero or 
        it will skew the less than or equal to 60 marks by 1.
        */
        if (input != 0){
            check(input);
        }

    /* Exit loop when 0 is entered */
    } while (input != 0) ;

    /* Print the count for each of the three ranges */
    printf(">=85:%d\n60-84:%d\n<60:%d",  count, count2, count3);
    
    return 0;
}