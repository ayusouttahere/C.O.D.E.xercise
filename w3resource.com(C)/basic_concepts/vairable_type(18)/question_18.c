// 18. Write a C program to demonstrate the working of the keyword long. 

// Expected Output :

//  The size of int = 4 bytes                                                           
//  The size of long = 8 bytes                                                          
//  The size of long long = 8 bytes                                                     
//  The size of double = 8 bytes                                                        
//  The size of long double = 16 byte 

#include<stdio.h>

int main(){
    // initialisation 
    int integer ; 
    long long_int ; 
    long long long_long ; 
    double doublee ; 
    long double long_double ; 
    

    // demonstration 
    printf("\nTHe size of int = %d",sizeof(integer)); 
    printf("\nTHe size of long = %d",sizeof(long_int)); 
    printf("\nTHe size of long long = %d",sizeof(long_long)); 
    printf("\nTHe size of double = %d",sizeof(doublee)); 
    printf("\nTHe size of long double = %d",sizeof(long_double)); 

    
    
    
    return 0 ; 
}