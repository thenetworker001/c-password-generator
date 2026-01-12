/*
/////////////// PASSWORD GENERATOR USING C v4.0///////////////
Author: thenetworker0001 (https://github.com/thenetworker001)
Github repository: https://github.com/thenetworker001/c-password-generator
Date: 12-01-2026

Description:
A command-line password generator written in pure C. Generates random passwords using printable ASCII characters excluding whitespace. Uses pseudo-random character generation and is not intended for cryptographic security.

Features:
- User defined password length with minimum of 8 and maximum 25
- Uses printable ASCII range characters except whitespace (ASCII 33-126)
- Modular design using pointer-based function calls

Notes:
- Program is built as part of learning C concepts and programming
- Uses rand() for pseudo-random generation of characters
- Not intended for cryptographic-grade security
//////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* exit status codes */
#define EXIT_INVALID_INPUT 1
#define EXIT_INVALID_LENGTH 2

/* program constants */
#define MAX_LEN 25
#define MIN_LEN 8
#define ASCII_START 33
#define ASCII_RANGE 94

void passgen(int len,char *password);

int main(){
    int len;
    char password[MAX_LEN+1];
    srand(time(NULL));

    printf("\t| WELCOME TO PASSWORDGEN v4.0 |\t\n");
    printf("\n-> Generate unique and secure passwords easily!\n");
    printf("\n-> Characters used: All printable ASCII characters except whitespace (ASCII 33-126)\n");
    printf("\n-> Minimun size of password is 8 characters\n");
    printf("\n-> Maximum size of password is 25 characters\n");
    printf("\n");

    printf("\nEnter the length of password: ");
    if (scanf("%d",&len) != 1 || len<=0){
        printf("\n\nEnter a valid input !!!\n\n");
        return EXIT_INVALID_INPUT;
   }
    else if(len<MIN_LEN){
        printf("\nMinimum length is 8 characters\n\n");
        return EXIT_INVALID_LENGTH;
    }
    else if(len>MAX_LEN){
        printf("\nMaximum length allowed is 25 characters\n\n");
        return EXIT_INVALID_LENGTH;
    }
    else{
       passgen(len,password);
    }
    
    printf("\nGenerated Password: %s\n",password);


    printf("\nGoodBye :)\n\n");
    return EXIT_SUCCESS;
}



void passgen(int len,char *password){
    int i;

    for(i=0;i<len;i++){
        password[i] = (rand() % ASCII_RANGE) + ASCII_START;
    }
    password[len] = '\0';
    
}
