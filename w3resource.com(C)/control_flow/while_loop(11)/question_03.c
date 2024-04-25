// 3. Write a C program that calculates the product of numbers from 1 to 5 using a while loop.

#include<stdio.h>

int main(){

    int i = 1 ; 
    int product = 1 ; 

    while(i != 6){
        product *= i ; 
        i++ ; 
    }
    
    printf("\nProduct is : %d",product);

    return 0  ; 
}