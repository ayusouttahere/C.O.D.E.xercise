// 20. Write a C program to display the pattern as a pyramid using asterisks, with each row containing an odd number of asterisks.

//    *
//   ***
//  *****

#include<stdio.h>

int main(){
    int rows = 3 ; 
    int column ; //not defined ; 
    char element = '*' ; 

    for(int i = 1 ; i<=rows ; i++){
        //spaces 
        for(int j=1 ; j<=rows-i ; j++){
            printf("  ") ; 
        }

        for(int j = 1 ; j<=2*i-1; j++){
            printf("* ") ; 
        }
        printf("\n") ; 
    }

    return 0 ; 
}