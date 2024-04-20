// 53. Write a C program that accepts the principle, rate of interest, and time and calculates simple interest.
// Test Data:
// Input Data: p = 10000, r = 10% , t = 12 year
// Expected Output:
// Input principle, Rate of interest & time to find

#include<stdio.h>

int main(){
    int principle, roi, time ; 
    principle = 10000 ; 
    roi = 10 ; 
    time = 12 ; 
    
    int si = (principle * roi * time)/100 ; 

    printf("simple interest = %d",si) ; 
    return 0 ; 
}