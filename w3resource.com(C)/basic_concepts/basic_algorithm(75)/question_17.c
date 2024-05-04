// 17. Write a C program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30.
// Expected Output:

// 29
// 30
// 39
// 30

#include<stdio.h>

int sum(int a, int b){
    int sum = a+b ; 
    if(sum>=10 && sum<=20){
        return 30 ; 
    }else{
        return sum ; 
    }
}

int main(){
    int s = sum(10,10) ; 
    printf("%d",s) ; 
    return 0 ; 
}