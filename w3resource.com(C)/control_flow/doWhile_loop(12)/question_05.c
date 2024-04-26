// 5. Write a C program that generates a random number between 1 and 100 and asks the user to guess it. Use a do-while loop to give the user multiple chances until they guess the correct number.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL)) ; // seeding random function ;
    // declaring a random number : 
    
    //setting range for random number : 
    int lowerBound = 1 ;
    int upperBound = 100 ; 
    int range = upperBound - lowerBound + 1 ; 

    int num = (rand()%range) + 1 ; 
    
    // guess as user input 
    int guess ; 

    // loop statement 
    do{
        printf("\nEnter a Number : "); 
        scanf("%d",&guess); 
    }while(guess != num) ;

    printf("EOF") ; 
    
    return 0 ; 
}