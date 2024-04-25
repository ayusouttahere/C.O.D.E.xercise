// 5. Write a C program that checks if a positive integer is divisible by either 3 or 7, or both. If the integer is a multiple of 3, then the program will return true. Similarly, if the integer is a multiple of 7, then also the program will return true. If the integer is not a multiple of 3 or 7, then the program will return false.
// Expected Output:

// 1
// 1
// 1
// 0

#include<stdio.h>
#include<stdbool.h>

bool test(int x); 

int main(){
    printf("%d",test(3)) ; 
    return 0 ; 
}

bool test(int x){
    if(((x%3) == 0) || ((x%7) == 0)){
        return true ; 
    }else{
        return false ; 
    }
}