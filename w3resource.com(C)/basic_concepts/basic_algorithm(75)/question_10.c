// 10. Write a C program to check which number is nearest to the value 100 among two given integers. Return 0 if the two numbers are equal.
// Expected Output:

// 95
// 0
// 99

#include<stdio.h>

int test(int x, int y) ;

int main(){

    int t = test(98,99) ; 
    printf("\n%d",t) ; 

    return 0 ; 
}

int test(int x, int y){
    int H = 100 ; //hundred 
    if((x > y)&&(y <= H)){
        return x ; 
    }else if((y > x)&&(y <= H)){
        return y ; 
    }else if(x == y){
        return 0 ; 
    }
}