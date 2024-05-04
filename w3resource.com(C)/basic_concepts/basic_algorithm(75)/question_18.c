// 18. Write a C program that accepts two integers and checks whether either one of them is 5 or their sum or difference is 5. If any of these conditions are met, the program returns true. Otherwise, it returns false.
// Expected Output:

// 1
// 0
// 1


#include<stdio.h>

int checksum(int a, int b){
    
    int s = a+b ; //sum 
    int d = a-b ; //differences 

    if(a == 5 || b ==5 || s==5 || d ==5){
        return 1 ; 
    } 

    return 0 ; 
}

int main(){ 
    
    int t = checksum(3,1) ;
    printf("\t%d",t) ; 

    return 0 ; 
}