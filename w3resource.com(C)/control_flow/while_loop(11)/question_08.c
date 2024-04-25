// 8. Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a while loop.

#include<stdio.h>

int cube(int x) ;

int main(){
    int sl ; // specific limit  
    int soc = 0  ; // sum of cubes 

    // user input for sl 
    printf("Enter a Number : ") ; 
    scanf("%d",&sl) ; 

    int i = 1; // iterator
    while( i <= sl){
        soc += cube(i) ; // sum of cubes = sum of cubes + cube of i  
        i += 2 ;
    }

    printf("\nSOC = %d",soc) ; 

    return 0 ; 
}

int cube(int x){
    return x * x * x ;
}