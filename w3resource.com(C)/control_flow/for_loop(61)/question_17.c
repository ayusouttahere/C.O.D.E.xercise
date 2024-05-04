// 17. Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.

//    1
//   2 2
//  3 3 3
// 4 4 4 4

#include<stdio.h>

int main(){
    int rows = 4 ;
    int columns = rows ; 
    int i = 0, j = 0 ; 

    for(i = 1 ; i<=rows ; i++){
        //printing spaces 
        for(int spaces = 1 ; spaces<= rows - i ; spaces++){
            printf(" ") ; 
        }

        //printing numbers 
        for(j = 1; j<=i ; j++){
            
            printf("%d ",i); 
        }
        printf("\n") ; 
    }    

    return 0 ; 
}