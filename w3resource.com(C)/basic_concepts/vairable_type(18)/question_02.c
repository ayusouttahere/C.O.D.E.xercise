// 2. Write a C program to convert a string to an unsigned long integer.

// Test Data and Expected Output :

// Input an unsigned number: 25                                            
// Output: 25

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    //initialisation 
    char integer[123] ; 
    unsigned long ul ; //unsigned long 

    //user input 
    printf("Input and Unsigned number : ") ; // being stored in a string
    fgets(integer,123,stdin);   

    //conversion 
    ul = strtoul(integer,NULL,0) ; 

    // output
    printf("\n OUTPUT : %u",ul) ; 

    return 0 ; 
}