/*
/////////////// PASSWORD GENERATOR USING C v2.0///////////////
- Written in pure C using standard libraries only 
- v3.0:
  * Characters used: (A-Z),(a-z),(0-9) and all characters in ASCII table
//////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 25
#define MIN_LEN 8

int passgen(int);

int main(){
    int len;
    srand(time(NULL));

    printf("\t| WELCOME TO PASSWORDGEN v3.0 |\t\n");
    printf("\n-> Generae unique and secure passwords easily!\n");
    printf("\n-> Characters used: [A-Z],[a-z],[0-9] and all special characters in ASCII Table\n");
    printf("\n-> Maximum size of password is 25 characters\n");
    printf("\n");

    printf("\nEnter the length of password: ");
    if (scanf("%d",&len) != 1 || len<=0){
        printf("\n\nEnter a valid input !!!\n\n");
        return 0;
    }
    if(len<=MAX_LEN && len>=MIN_LEN){
        passgen(len);
    }else{
        len<8 ? printf("\nMinimun length is 8 !!\n\n") : printf("\nMaximum length is 25 !!\n\n");
        return 0;
    }
    
    printf("\nGoodBye :)\n\n");
    return 0;
}

int passgen(int len){
    int i,randomNum;
    int range = 93;
    char password[MAX_LEN+1];

    for(i=0;i<len;i++){
        randomNum = rand() % range;
        password[i] = randomNum + 33;
    }
    password[i] = '\0';
    printf("\nGenerated Password: %s\n",password);
    return 0;
}