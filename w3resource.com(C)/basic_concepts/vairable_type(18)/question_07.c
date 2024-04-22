// 7. Write a C program to calculate the integral quotient and remainder of a division.

// Test Data and Expected Output :

// Input numerator : 2500                                                 
//  Input denominator : 235                                                
//  quotient =  10, remainder = 150   

#include<stdio.h>

int main(){
    // initialisation 
    int numerator, denominator ; 
    int quotient, remainder ; 

    // user input 
    printf("Enter a Numerator : ") ; 
    scanf("%d",&numerator) ; 

    printf("Enter a Denominator : ") ; 
    scanf("%d",&denominator) ; 

    // calC: 
    quotient = numerator/denominator ; 
    remainder = numerator%denominator ; 

    // out put 
    printf("\nQuotient is : %d,  Remainder is : %d",quotient, remainder); 
    return 0 ; 
}