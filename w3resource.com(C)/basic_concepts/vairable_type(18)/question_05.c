// 5. Write a C program to generate a random number.

// Test Data and Expected Output :

// Guess the number (1 to 10): 6                                           
// The number is higher                                                    
                                                                        
// Guess the number (1 to 10): 7                                           
// That is correct!        

#include<stdio.h>
#include<stdlib.h>
#include<time.h>      // Include the time header file for generating random numbers.

int main(){
    // initialisation 
    int number, input ; 

    // initialising the random number 
    srand(time(NULL)) ; 
    number = rand()%10+1; // Generate a random number between 1 and 10 and store it in 'number'.
    // to specify the range, we use :: 
    //                                  rand() % (max - min + 1) + min;

    // user input to guess the numbe : 
    do{
        printf("\n\nGuess the Number :");
        scanf("%d",&input) ; 

        if(input > number){
            printf("\n\nNumber is Smaller !") ; 
        }else if(input < number){
            printf("\n\nNumber is Greater !") ; 
        }else{
            printf("\n\nTHIS IS THE CORRECT GUESS !!") ; 
            exit(0) ; 
        }
    }while(number != input );

    return 0 ; 
}