// Write a C program to print numbers from 1 to 10 and 10 to 1 using a do-while loop.

#include<stdio.h>
int main(){

    int i = 1 ; 
    do{
        printf("%d\t",i); 
        i++ ; 
    }while(i<=10) ; 

    i-- ; // setting i's value to 10. 
    printf("\n") ; //new line

    do{
        printf("%d\t",i); 
        i-- ; 
    }while(i>=1); 

    return 0 ; 
}