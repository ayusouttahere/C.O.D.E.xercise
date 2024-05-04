// 13. Write a C program to check if two given non-negative integers have the same last digit.
// Expected Output:

// 0
// 1
// 1
// 0

#include<stdio.h>

int test(int x, int y){
    if((x%10)==(y%10)){
        return 1 ;
    }else{
        return 0 ;
    }
}

int main(){
    int t = test(55,65); 
    printf("\t%d",t) ;    
    return 0 ;
}