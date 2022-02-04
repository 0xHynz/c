#include <stdio.h>


int main(){
    char username[30],password[30];

    printf("--login page--\n");
    printf("username: ");
    scanf("%s",&username);
    printf("password: ");
    scanf("%s",&password);

    if (strcmp(username,"ina") == 0){
	    if (strcmp(password,"ina") == 0){
		    printf("Login success\n");
	    } else {
		    printf("wrong password\n");
	    }
    } else {
	    printf("username not registered!\n");
    }
}
