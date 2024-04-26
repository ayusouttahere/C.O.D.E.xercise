// 10. Write a C program that implements a program to count the number of digits in a given integer using a do-while loop.

#include<stdio.h>
int main(){
    int nod=0 ; //number of digits 

    // USER INPUT 
    int num ; 
    printf("\nEnter a Number : ") ; 
    scanf("%d",&num) ; 

    do{
        num/=10 ;
        nod++  ; 
    }while(num > 0) ; 

    printf("Number Of Digits = %d",nod) ; 
    
    return 0 ; 
}