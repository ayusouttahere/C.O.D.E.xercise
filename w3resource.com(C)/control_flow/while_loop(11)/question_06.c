// 6. Write a C program that prompts the user to enter a positive integer. It then calculates and prints the factorial of that number using a while loop.

#include<stdio.h>
int main(){
    
    // taking an integer as an input : 
    int posNo ; // postive number. 
    printf("Enter a Positive Number : "); 
    scanf("%d",&posNo) ; 

    // finding out factorial 
    int factorial = 1 ;
    int i = 1; 
    while(i <= posNo ){
        factorial *= i ; // factorial = factorial * i
        i++ ; // increment 
    }

    printf("\nFactorial is : %d",factorial) ; 

    return 0 ; 
}