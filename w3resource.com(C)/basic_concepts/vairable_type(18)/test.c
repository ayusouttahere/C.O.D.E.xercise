#include<stdio.h>
#include<stdlib.h>

int main(){
    int number ;
    printf("Enter a Number : ") ;
    scanf("%d",&number) ;

    //clearing console 
    system("clear") ; 

    printf("\t\t\t *GUESS THE NUMBER !!!*"); 

    int guess ; 

    do{
        printf("\nGuess the number :" );
        scanf("%d",&guess) ; 

        if(number < guess){
            printf("\n\nThe Number is Smaller !"); 
        }else if(number > guess){
            printf("\n\nThe Number is Greater !"); 
        }else{
            printf("\nTHIS IS THE CORRECT GUESS !");
            // exit() ;  
        }
    }while(number != guess) ; 

    return 0 ; 
}