// 1. Write a C program to accept two integers and check whether they are equal or not.
// Test Data : 15 15
// Expected Output :
// Number1 and Number2 are equal

#include<stdio.h>
#include<stdbool.h>

int isEqual(int x, int y);

int main(){
    //initialisation 
    int num1, num2 ; 

    //user input for 2 integers 
    printf("Enter an int : "); 
    scanf("%d",&num1); 
    printf("Enter an int : "); 
    scanf("%d",&num2); 

    //calling function 
    isEqual(num1, num2) ; 
    
    return 0 ; 
}

int isEqual(int x, int y){
    
    if(x == y){
        printf("\nIs Equal") ; 
        return 0 ; 
    }

    printf("\nIsn't Equal") ; 
    return 0 ; 
}