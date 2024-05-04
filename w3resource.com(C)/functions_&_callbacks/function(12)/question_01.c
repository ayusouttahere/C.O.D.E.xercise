// 1. Write a program in C to show the simple structure of a function.
// Expected Output :

// The total is :  11  

#include<stdio.h>

int function(int a, int b) ; 

int main(){
    int num1, num2 ; 
    printf("\nEnter a number : ") ; 
    scanf("%d",&num1) ;

    printf("\nEnter a number : ") ; 
    scanf("%d",&num2) ; 

    //calling function 
    int total = function(num1,num2) ; 

    //printing output
    printf("Total is : %d",total) ; 

    return 0 ; 
}

int function(int a, int b){
    int sum = a+b ; 
}