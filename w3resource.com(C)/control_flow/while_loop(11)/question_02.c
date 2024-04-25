// 2. Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered.

#include<stdio.h>

int main(){

    int num = 1 ; // initialisation 

    //user input till num != 0 ; 
    while(num != 0){
        printf("\nEnter a Number : ") ; 
        scanf("%d",&num) ; 
    }

    return 0 ; 
}