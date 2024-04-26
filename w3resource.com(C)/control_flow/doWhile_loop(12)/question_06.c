// 6. Write a C program that prompts the user to enter a positive integer and then calculates and prints the sum of the squares of each digit in that number using a do-while loop

#include<stdio.h>
int main(){ 
    //user prompt 
    int num ; 
    printf("\nEnter a Number : ") ; 
    scanf("%d",&num) ; 

    int square ; //for each digit ; 

    printf("\nSquares are : ") ; 

    do{ 
        square = (num%10)*(num%10) ; 
        printf("%d\t",square) ;

        num/=10 ; //removing last digit of input 
    }while(num > 0) ; 
    
    return 0 ; 
}