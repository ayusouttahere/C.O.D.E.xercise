// 15. Write a C program to calculate the factorial of a given number.
// Test Data :
// Input the number : 5
// Expected Output :
// The Factorial of 5 is: 120

#include<Stdio.h>

int main(){
    int factorial = 1 ; //factorial 

    // user input for number 
    int num;  
    printf("\nEnter a numbers : ") ; 
    scanf("%d",&num) ; 
    
    //finding factorial using for loop 
    for(int i=1 ; i<=num; i++){
        factorial*=i ;
    }

    printf("\nFactorial is %d",factorial) ; 

    return 0 ; 
}