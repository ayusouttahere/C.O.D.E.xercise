// 56. Write a C program to shift given data by two bits to the left.
// Input value : 2
// Read the integer from keyboard-
// Integer value = 2
// The left shifted data is = 16

#include<stdio.h>

int main(){
    int int1 ; 

    printf("Input and integer : ") ; 
    scanf("%d",&int1); 

    int int2 = int1<<2 ; 

    printf("left shifted %d is %d",int1, int2); 
    return 0 ; 
}