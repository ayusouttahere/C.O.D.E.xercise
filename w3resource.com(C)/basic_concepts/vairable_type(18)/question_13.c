// 13. Write a C program to convert a string to an integer. 

// Test Data and Expected Output :

// Input a number : 1972                                                   
// The value Input is 1972.

#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

int main(){
    // initialisation 
    char num[100] ; 
    int num1 ; 

    // user input 
    printf("Input a Number : ") ; 
    fgets(num,100,stdin) ; 
    
    // conversion 
    num1 = atoi(num) ; 

    // out put 
    printf("The value input is : %d.\n\n",num1); 

    return 0 ;  
}