// 11. Write a C program that checks if two given integers are in the range of 40 to 50 inclusive, or if they are both in the range of 50 to 60 inclusive.
// Expected Output:

// 0
// 0
// 1
// 1

#include<stdio.h>

int test(int x, int y) ; 

int main(){
    int t = test(40,60) ; 
    printf("\n%d",t); 
    return 0 ; 
}

int test(int x, int y){
    if((((x>=40) && (x<=50)) && ((x>=50) && (x<=60))) && (((y>=40) && (y<=50)) && ((y>=50) && (y<=60))) ){
        return 1 ; 
    }else{
        return 0 ; 
    }
}