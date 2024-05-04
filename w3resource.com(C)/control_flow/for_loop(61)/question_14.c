// 14. Write a C program to make such a pattern as a pyramid with an asterisk.

//    * 
//   * * 
//  * * * 
// * * * *


#include<Stdio.h>

int main(){
    int rows = 4 ; // number of rows :3 

    for(int i=1 ; i<=4; i++){
        for(int space = 1 ; space<=(rows-i); space++){ 
            printf(" ") ; 
        }
        for(int j = 1; j<=i ; j++){
            printf("* ") ;
        }
        printf("\n") ; 
    }
    
    return 0 ; 
}