// 13. Write a program in C to make a pyramid pattern with numbers increased by 1.
//    1 
//   2 3 
//  4 5 6 
// 7 8 9 10 

#include<stdio.h>

int main(){

    int p = 1 ; //print numbers ;

    for(int i=1 ; i<=4 ; i++){ // this loop is to take care of number of rows
        
        for(int space=1 ; space<=(4-i) ; space++){ //this loop to print spaces
            printf(" ") ; 
        }

        for(int j=1 ; j<=i ; j++){
            printf("%d ",p) ;
            p++ ; // to increment printing value 
        }


        printf("\n") ; //to add new line :3

    }
    
    return 0 ; 
}