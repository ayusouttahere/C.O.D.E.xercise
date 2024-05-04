// 7. Write a program in C to check whether a number is a prime number or not using the function.
// Test Data :
// Input a positive number : 5
// Expected Output :

// The number 5 is a prime number. 

#include<stdio.h>

int isPrime(int x); 

int main(){
    printf("%d",isPrime(4)) ; 
    return 0 ; 
}

int isPrime(int x){
    if(x <= 1){
        return 0 ; 
    }

    for(int i = 2 ; i < x/2 ; i++){
        if(x%i == 0){
            return 0 ;
        }
    }

    return 1 ; 
}