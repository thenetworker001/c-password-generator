/*
/////////////// PASSWORD GENERATOR USING C v1.0///////////////
- Written in pure C using standard libraries only 
- v1.0:
  * Basic CMLI 
  * Choose Password Length
  * Demo password is generated of chosen length
  * Print password and exit
//////////////////////////////////////////////////////////////
*/

#include <stdio.h>

int passgen();

int main(){

    int len;

    printf("WELCOME TO PASSWORDGEN :)\n");
    printf("Generate unique and secure passwords easily!\n");
    passgen();

    printf("\n\nGoodBye :)\n\n");

    return 0;
}

int passgen(){
    int i,len;

    printf("\nPasswords are generated using [X-X]\n");
    printf("\nEnter the length of password: ");
    scanf("%d",&len);
    printf("Password: ");
    for(i=0;i<len;i++){
        printf("X");
    }
}