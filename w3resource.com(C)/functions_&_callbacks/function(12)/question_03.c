// 3. Write a program in C to swap two numbers using a function.
// Test Data :
// Input 1st number : 2
// Input 2nd number : 4
// Expected Output :

// Before swapping: n1 = 2, n2 = 4                                                  
// After swapping: n1 = 4, n2 = 2 

#include<stdio.h>

int swap(int *x, int *y) ; 

int main(){
    int num1, num2 ; 
     
    // user input for 2 numbers; 
    printf("\nEnter a number : ") ; 
    scanf("%d",&num1) ; 
    
    printf("\nEnter a number : ") ; 
    scanf("%d",&num2) ; 

    //swapping with function call using refrences
    swap(&num1,&num2) ; 
    
    //output 
    printf("\nNum 1 is : %d, Num 2 is : %d",num1,num2) ;  

    return 0 ; 
}

int swap(int *x, int *y){

    int temp = *x ; 
    *x = *y ; 
    *y = temp ; 

    return 0 ; 
}