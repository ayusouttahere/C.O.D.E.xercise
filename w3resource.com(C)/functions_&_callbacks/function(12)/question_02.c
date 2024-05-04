// 2. Write a program in C to find the square of any number using the function.
// Test Data :
// Input any number for square : 20
// Expected Output :

// The square of 20 is : 400.00


#include<stdio.h>

int sqr(int x) ; 

int main(){
    // user input for a number : 
    int num ; 
    printf("\nEnter a number : ") ; 
    scanf("%d",&num) ; 
    
    //function call 
    int square = sqr(num) ; 

    // ouput 
    printf("\nThe square of %d is : %d",num,square) ; 
    
    
    return 0 ; 
}

int sqr(int x){
    return x*x ; 
}