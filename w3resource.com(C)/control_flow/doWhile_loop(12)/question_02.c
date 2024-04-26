// 2. Write a C program that prompts the user to input a series of integers until the user stops by entering 0 using a do-while loop. Calculate and print the sum of all positive integers entered.

#include<stdio.h>
int main(){

    int num ; // user input for num : 
    int sum = 0 ; // to calC sum of all the integers entered 
    do{
        printf("\nEnter a Number :") ; 
        scanf("%d",&num);
        sum += num ;  
    }while(num != 0); 

    printf("\nSum is : %d",sum) ; 
    return 0 ; 
}