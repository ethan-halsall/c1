/*
*Student ID: 201458429
*Student name: Ethan Halsall
*Email: sgehalsa@liverpool.ac.uk
*
*User: sgehalsa
*
*Problem ID: 1018
*RunID: 23585
*Result: accepted
*/

#include <stdio.h>
#include <string.h>

void reverse(char* str){
    const int len = strlen(str);

    /* Iterate through str from the last index to the first */
    for(int idx = len - 1; idx >= 0; idx--) {
            printf("%c", str[idx]);
    }
}

int main(){
    char str[100];

    /* Get input file from command line. */
    if (scanf("%[^\n]%*c", str) != EOF){
        reverse(str);
    }

    return 0;
}