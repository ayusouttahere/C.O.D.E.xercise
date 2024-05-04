// 4. Write a program in C to check if a given number is even or odd using the function.
// Test Data :
// Input any number : 5
// Expected Output :

//  The entered number is odd. 


#include<stdio.h>

int isOdd(int x); 

int main(){

    //function call 
    isOdd(8) ; 

    return 0 ; 
}

int isOdd(int x){
    if(x%2 == 0){
        printf("\nis Even !") ; 
        return 0 ;
    }else{
        printf("\nis Odd !") ; 
        return 1 ; 
    }
}