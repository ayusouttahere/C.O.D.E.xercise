// 16. Write a C program to check whether a character is an alphabet, digit or special character.
// Test Data :
// @
// Expected Output :
// This is a special character.

#include<stdio.h>
#include<stdlib.h>

void check(char character) ; 

int main(){
    system("clear") ; 
    char charr ; 
    while(charr != 'Z'){
        
        printf("\nEnter a Character : ") ; 
        scanf("%c",&charr) ;

        check(charr) ; 
    }


    return 0 ; 
}

void check(char character){
    if((character >= 48) && (character <= 57)){
        printf("\nDIGIT !") ; 
    }else if(((character >= 65) && (character <= 90)) || ((character >= 97) && (character <= 122))){
        printf("\nALPHABET !") ; 
    }else{
        printf("\nCharacter") ; 
    }
    return  ;
}