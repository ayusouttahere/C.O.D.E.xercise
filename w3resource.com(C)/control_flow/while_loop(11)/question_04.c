// 4. Write a C program that prompts the user to input a series of numbers until they input a duplicate number. Use a while loop to check for duplicates.

#include<stdio.h>

int main(){
    
    int num = 1; 

    while((num%10) != (num/10)){
        printf("\nEnter a number : ") ; 
        scanf("%d",&num) ; 
    }

    return 0 ; 
}