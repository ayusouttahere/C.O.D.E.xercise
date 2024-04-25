// 6. Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
// Test Data : -5
// Expected Output :
// The value of n = -1

#include<stdio.h>

void setN(int m, int * n); 

void main(){
    // user input for M; 
    int m, n ; 
    printf("Input M : ") ;
    scanf("%d",&m) ; 

    // calling function 
    setN(m,&n) ;
    
    printf("N is %d\t M is %d",n,m) ; 


    return ; 
}

void setN(int m, int * n ){
    if(m > 0){
        *n = 1 ;  
    }else if( m == 0 ){
        *n = 0 ; 
    }else{
        *n = -1 ; 
    }
    return ; 
}