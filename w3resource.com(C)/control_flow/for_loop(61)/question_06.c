// 6. Write a program in C to display the multiplication table for a given integer.
// Test Data :
// Input the number (Table to be calculated) : 15
// Expected Output :
// 15 X 1 = 15
// ...
// ...
// 15 X 10 = 150

#include<stdio.h>
int main(){
    // usr input for a number : 
    int n ; 
    printf("Print Multiplication table of ? : ") ; 
    scanf("%d",&n) ; 

    for(int i = 1 ; i <= 10 ; i++){
        printf("\n%d * %d = %d",n, i, n*i) ; 
    }

    return 0 ; 
}