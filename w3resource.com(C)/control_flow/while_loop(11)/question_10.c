// 10. Write a C program to find and print the first 10 Fibonacci numbers using a while loop.

#include<stdio.h>

int main(){
    // declaring firsst 2 fib. nums 
    int fib1 = 0, fib2 = 1 ; 

    // printing first 2 fibonacci numbers : 
    printf("%d\t",fib1); 
    printf("%d\t",fib2);

    int i = 3 ; 
    while( i <= 10){
        int fib = fib1+fib2 ; // current fibonacci being printed ; 
        printf("%d\t",fib) ; 

        // changing fibonacci values for sum on another iteration 
        fib1 = fib2 ; 
        fib2 = fib ;
        
        i++ ; // incrementing i 

    } 
    return 0 ; 
}