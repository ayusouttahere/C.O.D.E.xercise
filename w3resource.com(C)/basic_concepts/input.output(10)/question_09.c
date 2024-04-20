// 9. Write a C program to perform addition, subtraction, multiplication and division of two numbers.
// Expected Output :
// Input any two numbers separated by comma : 10,5
// The sum of the given numbers : 15
// The difference of the given numbers : 5
// The product of the given numbers : 50
// The quotient of the given numbers : 2.000000

#include<stdio.h>

int main(){
    // initialisation 
    int sum, product, sub, div ; //addition, subtraction, multiplication and division
    int num1, num2 ; 

    // user input for them 2 integers 
    printf("Input any two numbers (seprated by commas) : "); 
    scanf("%d,%d",&num1, &num2) ; 

    // calculating values for sum..
    sum = num1+num2 ; 
    sub = num1-num2 ; 
    product = num1*num2 ; 
    div = num1/num2 ; 

    //out put 
    printf("\nThe Summation  of th given numbers : %d",sum);
    printf("\nThe Division of th given numbers : %d",div);
    printf("\nThe Product of th given numbers : %d",product);
    printf("\nThe Subtraction of th given numbers : %d",sub);

    return 0 ; 
}