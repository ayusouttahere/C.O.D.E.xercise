// 12. Write a C program to reverse a given number using a do-while loop.

#include<stdio.h>
int main(){
    // user input for number 
    int num ; 
    printf("\nEnter a Number : ")  ; 
    scanf("%d",&num) ; 

    int reverse = 0 ; //reverse 
    do{
        reverse = (reverse * 10) + (num%10) ; 
        num /= 10 ; 
    }while(num > 0) ; 

    printf("\nREVERSE IS : %d",reverse) ; 

    return 0 ; 

}