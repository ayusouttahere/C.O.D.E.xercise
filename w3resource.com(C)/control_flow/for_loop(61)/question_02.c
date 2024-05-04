// 2. Write a C program to compute the sum of the first 10 natural numbers.
// Expected Output :
// The first 10 natural number is :
// 1 2 3 4 5 6 7 8 9 10
// The Sum is : 55

#include<stdio.h>

int main(){
    int sum = 0 ; // to store 'sum'
    
    // printing first 10 natural numbers  
    for(int i = 1 ; i <= 10 ; i++){
        printf("%d\t",i); // printing numbers 
        sum+= i ; //calculating sum
    }

    printf("\nSUM is : %d",sum) ; //printing sum 
    
    return 0 ; 
}