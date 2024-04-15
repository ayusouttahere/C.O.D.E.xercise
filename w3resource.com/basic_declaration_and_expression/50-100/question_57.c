// 57. Write a C program to reverse and print a given number.
// Input a number:
// The original number = 234
// The reverse of the said number = 432

#include<stdio.h>


int main(){
    int num ; 
    printf("input an int : ") ; 
    scanf("%d",&num); 

    //reverse : 
    int newnum = 0 ; 
    // int product = 1 ; 
    while(num >= 1){
        int x = num%10 ; 
        newnum = newnum * 10 + x ; 
        num = num/10 ; 
        // product *= 10  ;
    }

    printf("\n reversed number must be : %d",newnum); 
    return 0 ; 
}