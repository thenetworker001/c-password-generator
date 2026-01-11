/*
/////////////// PASSWORD GENERATOR USING C v3.0///////////////
- Written in pure C using standard libraries only 
- v3.0:
  * Characters used: All printable ASCII characters except whitespace (33-126).
//////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 25
#define MIN_LEN 8
#define ASCII_START 33
#define ASCII_RANGE 94

void passgen(int);

int main(){
    int len;
    srand(time(NULL));

    printf("\t| WELCOME TO PASSWORDGEN v3.0 |\t\n");
    printf("\n-> Generate unique and secure passwords easily!\n");
    printf("\n-> Characters used: All printable ASCII characters except whitespace (ASCII 33-126)\n");
    printf("\n-> Maximum size of password is 25 characters\n");
    printf("\n");

    printf("\nEnter the length of password: ");
    if (scanf("%d",&len) != 1 || len<=0){
        printf("\n\nEnter a valid input !!!\n\n");
        return 0;
   }
    else if(len<MIN_LEN){
        printf("\nMinimum length is 8 characters\n\n");
        return 0;
    }
    else if(len>MAX_LEN){
        printf("\nMaximum length allowed is 25 characters\n\n");
        return 0;
    }
    else{
       passgen(len);
    }
    
    printf("\nGoodBye :)\n\n");
    return 0;
}

void passgen(int len){
    int i,randomNum;
    char password[MAX_LEN+1];

    for(i=0;i<len;i++){
        randomNum = rand() % ASCII_RANGE;
        password[i] = randomNum + ASCII_START;
    }
    password[i] = '\0';
    printf("\nGenerated Password: %s\n",password);
}