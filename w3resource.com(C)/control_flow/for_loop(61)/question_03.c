// 3. Write a program in C to display n terms of natural numbers and their sum.
// Test Data : 7
// Expected Output :
// The first 7 natural number is :
// 1 2 3 4 5 6 7
// The Sum of Natural Number upto 7 terms : 28

#include<stdio.h>

int main(){
    // user input for n 
    int n ; 
    printf("Enter the number of Natural Number you want to print : ") ; 
    scanf("%d",&n) ; 

    //printing them numbers and calculating sum ; 
    int sum = 0 ;
    printf("\nNatual Numbers are : ") ;

    for(int i = 1 ; i <= n ; i++){
        printf("%d\t",i) ; 
        sum += i ; 
    }

    printf("\nand their sum is : %d",sum) ; 

    return 0 ; 
}