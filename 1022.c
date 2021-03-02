#include <stdio.h>
#include <string.h>
#include <ctype.h>

int num_english_chars, num_digits, num_spaces, num_other_chars = 0;

void count(char* str){
    const int len = strlen(str);

    /* 
    Iterate through each character of the string,
    during each iteration checks whether the character is a
    digit, alphabetical, white space or something else.
    We use the functions from the ctype.h to do this.
    */
    for (int idx = 0; idx < len; idx++) {
        if (isdigit(str[idx])){
            num_digits++;
        } else if (str[idx] == ' '){
            num_spaces++;
        } else if (isalpha(str[idx])){
            num_english_chars++;
        } else {
            num_other_chars++;
        }
    }

    /* Print numbers of each type of character */
    printf("%d %d %d %d", num_english_chars , num_digits, num_spaces, num_other_chars);
}

int main(){
    char str[100];

    /* 
    Read input file from command line as string and 
    ignore whitespaces as new lines 
    which allows us to capture the entire string 
    */
    if (scanf("%[^\n]%*c", str) != EOF){
        count(str);
    }

    return 0;
}