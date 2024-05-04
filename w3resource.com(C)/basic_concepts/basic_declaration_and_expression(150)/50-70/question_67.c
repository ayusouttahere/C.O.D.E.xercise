// 67. Write a C program to evaluate the equation y=xn when n is a non-negative integer.
// Input the values of x and n: 256
// x=256.000000; n=0;
// x to power n=1.000000

#include<stdio.h>

int main(){ 
    int count, n ; 
    float x,y  ;

    printf("input for  x : "); 
    scanf("%f",&x); 

    printf("input for n : "); 
    scanf("%d",&n);

    y = 1.0 ; 
    count = 1 ; 

    while(count <= n){
        y = y*x ; 
        count ++ ; 
    }

    //print results : 
    printf("x is %f, y is %f, n is %d",x,y,n); 

}