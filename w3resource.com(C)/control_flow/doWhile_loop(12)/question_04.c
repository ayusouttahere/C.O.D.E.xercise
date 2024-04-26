// 4. Write a C program that prompts the user to enter a series of numbers until they input a negative number. Calculate and print the sum of all entered numbers using a do-while loop.

#include<stdio.h>
int main(){
    int num ; 
    int sum = 0 ; //sum of all the numbers : 
    
    do{
        printf("\nEnter a Number (negative to terminate)  : ") ; 
        scanf("%d",&num);
        sum += num ; 
    }while(num > 0) ;

    printf("\nSUM IS : %d",sum);  
    return 0 ;
}