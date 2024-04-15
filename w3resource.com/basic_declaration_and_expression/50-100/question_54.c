// 54. Write a C program that accepts a distance in centimeters and prints the corresponding value in inches.
// Test Data:
// Input Data: 500cms
// Input the distance in cm:
// Distance of 500.00 cms is = 196.85 inches

#include<stdio.h>

int main(){
    float in, cm ; 
    printf("Input distance in CM : "); 
    scanf("%f",&cm); 

    // cm to inches ; 
    in = cm/2.54 ; 

    //output 
    printf("\n inches : %f",in) ; 
    return 0 ; 
}