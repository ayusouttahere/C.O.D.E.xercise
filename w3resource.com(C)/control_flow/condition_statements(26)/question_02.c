// 2. Write a C program to check whether a given number is even or odd.
// Test Data : 15
// Expected Output :
// 15 is an odd integer

#include<stdio.h>

void eod(int x) ; // function even or odd 

int main(){
    // initialisation and user input 
    int num ; 
    printf("Enter an int : ") ; 
    scanf("%d",&num) ; 

    //calling eod to check.. 
    eod(num); 

    return 0 ; 
}

void eod(int x){
    if(x%2 == 0 ){
        printf("\n ODD !") ;
        return ; 
    }

    printf("\nEVEN !") ;
    return ;  

}