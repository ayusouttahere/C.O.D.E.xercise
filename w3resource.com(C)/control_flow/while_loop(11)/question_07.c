// 7. Write a C program that prompts the user to input a username. Use a while loop to keep asking for a username until a valid one is entered (e.g., at least 8 characters long).

#include<stdio.h>
#include<string.h>

int main(){
    
    char username[10] ; 
    
    //crating an infinite loop 
    while(1){
        printf("Enter UserName : ") ;
        fgets(username,10,stdin) ; 

        if(strlen(username) > 8){
            break ; 
        }else{
            printf("\nEnter a Valid UserName : ") ; 
        }
        //incase of input buffer 
        while(getchar() != '\n'); 
    }

    return 0 ;  
}