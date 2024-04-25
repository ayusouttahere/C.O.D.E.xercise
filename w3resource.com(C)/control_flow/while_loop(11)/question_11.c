// 11. Write a C program that prompts the user to enter a positive integer. Use a while loop to print the multiplication table for that number up to 10.

#include<stdio.h>
#include<stdlib.h>

int main(){
    // taking a number from user : 
    int num  ;
    printf("\nEnter a Number : ") ;
    scanf("%d",&num); 

    system("clear") ; 

    printf("\nPRINTING TABLE OF %d\n",num) ; 
    int i = 1 ; 
    while(i <= 10){
        printf("%d\n",num*i) ;
        i++ ; // incrementing i 
    }

    return 0 ; 
}