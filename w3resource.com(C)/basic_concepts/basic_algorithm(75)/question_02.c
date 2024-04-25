// 2. Write a C program that will take a number as input and find the absolute difference between the input number and 51. If the input number is greater than 51, it will return triple the absolute difference.
// Expected Output:

// 6 for 53 
// 21 for 30 
// 0 for 51

#include<stdio.h>
#include<stdlib.h>

int test(int x) ;

int main(){
    printf("%d",test(51)) ; 
    return 0 ; 
}

int test(int x){
    return x>51 ? abs((x-51)*3) : abs(x-51) ; 
}