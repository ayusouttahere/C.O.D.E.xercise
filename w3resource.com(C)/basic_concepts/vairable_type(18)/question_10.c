// 10. Write a C program to return the quotient and remainder of a division.

// Test Data and Expected Output :

// Input numerator : 2000                                                 
//  Input denominator : 235                                                
//  quotient =  8, remainder = 120. 

#include<stdio.h>

int main(){
    // initialisation
    int numerator, denominator ; 
    int quotient, remainder ; 

    // user input 
    printf("Input Numerator : ") ; 
    scanf("%d",&numerator) ; 

    printf("Input Denominator : ") ; 
    scanf("%d",&denominator) ;

    // calculate 
    quotient = numerator/denominator ; 
    remainder = numerator%denominator ; 

    // out put 
    printf("\nQuotient = %d, Remainder = %d",quotient,remainder) ; 
    
    
    
    return 0 ;
}