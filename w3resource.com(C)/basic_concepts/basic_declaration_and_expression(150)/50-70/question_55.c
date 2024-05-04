// 55. Write a C program that swaps two numbers without using a third variable.
// Input value for x & y:
// Before swapping the value of x & y: 5 7
// After swapping the value of x & y: 7 5

#include<stdio.h>

int main(){
    int x, y ; 
    printf("input x : ") ; 
    scanf("%d",&x); 

    printf("input x : ") ; 
    scanf("%d",&y); 
    
    // swapping : 
    x = x+y ; 
    y = x-y ; 
    x = x-y ; 

    printf("X is : %d\t Y is %d. ",x,y);

    return 0 ; 
}