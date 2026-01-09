/*
/////////////// PASSWORD GENERATOR USING C v2.0///////////////
- Written in pure C using standard libraries only 
- v2.0:
  * Improved CMLI 
  * Choose Password Length of minimum 8 and maximum 25:
        MAX_LEN is used to define maximum length.
  * Characters used for password: [0-9]
  * Password of given length is generated
  * Print password and exit
//////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 25

int passgen(int);

int main(){
    int len;
    srand(time(NULL));

    printf("\t| WELCOME TO PASSWORDGEN v2.0 |\t\n");
    printf("\n-> Generae unique and secure passwords easily!\n");
    printf("\n-> Passwords are generated using [0-9]\n");
    printf("\n-> Maximum size of password is 25 characters\n");
    printf("\n");

    printf("\nEnter the length of password: ");
    if (scanf("%d",&len) != 1 || len<=0){
        printf("\n\nEnter a valid input !!!\n\n");
        return 0;
    }
    if(len<=25 && len>=8){
        passgen(len);
    }else{
        len<8 ? printf("\nMinimun length is 8 !!\n\n") : printf("\nMaximum length is 25 !!\n\n");
        return 0;
    }
    
    printf("\n\nGoodBye :)\n\n");
    return 0;
}

int passgen(int len){
    int i,randomNum;
    char password[26];

    for(i=0;i<len;i++){
        randomNum = rand() % 10;
        password[i] = randomNum + '0';
    }
    password[i] = '\0';
    printf("\nGenerated Password: %s\n",password);
    return 0;
}