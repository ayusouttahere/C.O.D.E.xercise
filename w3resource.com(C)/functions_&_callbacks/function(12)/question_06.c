// 6. Write a program in C to convert a decimal number to a binary number using the function.
// Test Data :
// Input any decimal number : 65
// Expected Output :

//  The Binary value is : 1000001 
 
#include<stdio.h>

void tobinary(int x ); 

int main(){
    
    tobinary(75) ; 

    return 0 ; 
}

void tobinary(int x ){
    printf("%d to binary is : ",x) ;
    long bno = 0 ;
    int r ; // for remainder 
    int f = 1 ;  // idk yet 

    while(x != 0){
        r = x %2  ;
        bno = bno + r * f ; 
        f = f * 10 ;
        x = x/2 ;  
    }

    return bno ; 

}