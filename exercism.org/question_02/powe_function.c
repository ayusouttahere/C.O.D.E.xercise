#include<stdio.h>

int pow(int number, int exponent); 

int main(){

    int number = 3 ; 
    int exponent = 4 ; 
    
    printf("%d raised to the power of %d will be :  %d",number, exponent, pow(number,exponent)); 

    return 0 ; 
}

int pow(int number, int exponent){
    int x = number ; 
    for(int i = 2 ; i <= exponent ; i++ ){
        x *= number ; 
    }
    return x ; 
}