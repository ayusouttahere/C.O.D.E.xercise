// 9. Write a program in C to display a pattern like a right angle triangle using an asterisk.

// The pattern like :

// *
// **
// ***
// ****

#include<stdio.h>
int main(){
    // printing given star pattern 
    for(int i=1 ; i<=4 ; i++){
        for(int j=1 ; j<=i ; j++){
            printf("*") ; 
        }
        printf("\n") ;
    }
    return 0 ; 
}