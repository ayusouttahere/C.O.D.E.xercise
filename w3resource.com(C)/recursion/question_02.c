// 2. Write a program in C to calculate the sum of numbers from 1 to n using recursion.
// Test Data :
// Input the last number of the range starting from 1 : 5
// Expected Output:

// The sum of numbers from 1 to 5 : 
// 15

int calcSum(int n)  ;

#include<stdio.h>
int main(){
    // user input for n ;
    int n ; // to find sum till n 
    printf("\nEnter a Number : ") ; 
    scanf("%d",&n) ; 

    int sum ; // sum of all numbers : 
    // function call

    sum = calcSum(n);; 

    printf("\nSUM IS : %d",sum) ; 
    return 0 ; 
}

int calcSum(int n){ 
    int res ; 
    if(n == 1){
        return (1) ; 
    }else{
        res =  n + calcSum(n-1) ;
    }
    return res ; 
}