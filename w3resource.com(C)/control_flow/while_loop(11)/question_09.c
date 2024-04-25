// 9. Write a C program that implements a program to check if a given number is a palindrome using a while loop.

#include<stdio.h>
int main(){
    int num ; 
    int original ; // original number 
    int reversed = 0 ; // reversed integer

    //user input 
    printf("\nEnter a Number : ") ;
    scanf("%d",&num) ; 
    // setting original for comparison 
    original = num ; 

    // creating a reverse number 
    while(num > 0 ){
        //getting a remainder to add to reverse number : 
        int remainder = num%10 ; 
        
        reversed = reversed * 10 + remainder ; 

        num/= 10 ; 
    }

    if(reversed == original){
        printf("\nIS PALINDROME.") ;
    }else{
        printf("\nISN'T PALINDROME.") ; 
    }


    return 0 ; 
}