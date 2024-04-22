// 16. Write a C program to return the absolute value of an integer. 

// Test Data and Expected Output :

// Input a positive or negative number :-25                               
//  The absolute value of the given number is : 25

#include<stdio.h>
#include<stdlib.h>


int main(){
    //initialisation 
    int num ; 
    int absnum ; // absolute num ; 

    // user input 
    printf("Input a positive or negative number : ") ; 
    scanf("%d",&num); 

    // conversion 
    absnum = abs(num); 

    // output 
    printf("The absolute value of the given number is : %d",absnum) ; 

    return 0 ; 
}