// 1. Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.

#include<stdio.h>

int main(){
    
    // 1 to 10 ; 

    int i = 1 ;
    while(i <= 10){
        printf("%d\t",i); 
        i++ ; 
    }
    // as i = 11 here or we can Declare it to 10  
    i = 10 ; 

    printf("\n") ; // new line 
    
    // 10 to 1 : 
    while(i >= 1){
        printf("%d\t",i);
        i-- ; 
    }

    return 0 ; 
}