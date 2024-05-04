// 3. Write a program in C to print the Fibonacci Series using recursion. >
// Test Data :
// Input number of terms for the Series (< 20) : 10
// Expected Output:

//  Input number of terms for the Series (< 20) : 10                                
//  The Series are :                                                                
//  1  1  2  3  5  8  13  21  34  55  

#include<stdio.h>

int fibonacci(int n){
    if(n <= 1){
        return n ; 
    }else{
        return fibonacci(n-1) + fibonacci(n-2) ; 
    }
}

void printFibonacci(int n, int count){
    
    if(count==n)
    return ; 

    printf("%d\t",fibonacci(count)) ; 
    printFibonacci(n, count+1); // count is the number and n is no. of terms to be printed : 

}



int main(){

    int num ; 
    printf("Enter the number of sequence you want to print : ") ; 
    scanf("%d",&num) ; 

    printf("\nThe fibonacci sequence is : ") ; 
    printFibonacci(num,0) ; 


    return 0 ; 
}