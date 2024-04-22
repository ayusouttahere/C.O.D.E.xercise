// 14. Write a C program to convert a string to a double. 

// Test Data and Expected Output :

// Input a number : 25                                                                                          
//  The original number is : 25.000000                                                                           
//  After division by 2 the number is : 12.500000 


#include<stdio.h>
#include<stdlib.h>


int main(){
    // initialisation 
    char num[100] ; 
    float num1 ; 

    // user input 
    printf("Input a Number : ") ; 
    fgets(num,100,stdin) ; 
    
    // conversion 
    num1 = atof(num) ;  // array to floating points 

    // out put 
    printf("The value input is : %f.\n\n",num1); 

    return 0 ;  
}