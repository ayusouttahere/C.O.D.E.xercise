// 62. Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.
// Input a positive number less than 500:
// Sum of the digits of 347 is 14

#include<stdio.h>


int main(){
    int integer ; 
    printf("Input an integer < 500 : ");
    scanf("%d",&integer) ; 
    
    if(integer > 500){
        printf("invalid ineteger"); 
        return 1 ;
    }

    int sum = 0 ; 
    while(integer > 0){
        sum += integer%10 ; 
        integer/=10 ; 
    }

    printf("Sum of th digits of integer is  : %d",sum) ; 

    return 0 ; 
}