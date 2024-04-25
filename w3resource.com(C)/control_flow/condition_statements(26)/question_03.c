// 3. Write a C program to check whether a given number is positive or negative.
// Test Data : 15
// Expected Output :
// 15 is a positive number

#include<stdio.h>

void isPositive(int x); 

int main(){
    isPositive(-10) ; 
    isPositive(55) ;
    return 0 ; 
}

void isPositive(int x){
    if(x > 0){
        printf("\nisPositive.") ; 
        return ; 
    }
    printf("\nisNegative");
    return ; 
}