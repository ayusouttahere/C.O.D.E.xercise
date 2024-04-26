// 8. Write a C program that prompts the user to enter a password. Use a do-while loop to keep asking for the password until the correct one is entered.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    char pass[10] ; 
    
    do{
        printf("\nEnter a Password : ") ; 
        fgets(pass,10,stdin); 
        if(strlen(pass)!=10){
            break ; 
        }
    }while(1) ; 

    return 0 ; 
}