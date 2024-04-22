// 8. Write a C program to return the absolute value of a long integer.

// Test Data and Expected Output :

// Input 1st number (positive or negative) : 25                           
//  Input 2nd number (positive or negative) : -125                         
//  The absolute value of 1st number is : 25                                           
//  The absolute value of 2nd number is : 125  

#include<stdio.h>
#include<stdlib.h>

int main(){
    // initialisation 

    // unsigned int ab1 ; // absolute value of int1 
    // unsigned int ab2 ; // absolute value of int2

    long int int1, int2 ; // two long integers : 

    // user input : 
    printf("\nInput 1st number (positive or negative) : ");
    scanf("%d",&int1) ; 

    printf("\nInput 2nd number (positive or negative) : ");
    scanf("%d",&int2) ;

    // declaration 4 ab's 
    // ab1 = int1 ;
    // ab2 = int2 ; 

    // output   
    printf("\nThe absolute value of 1st number is : %d",labs(int1)) ; 
    printf("\nThe absolute value of 2nd number is : %d",labs(int2)) ; 


    return 0 ; 
}