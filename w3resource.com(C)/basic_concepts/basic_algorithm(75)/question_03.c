// 3. Write a C program that checks two given integers and returns true if at least one of them is 30 or if their sum is 30. In other words, if either of the two integers is 30 or if their sum equals 30, the program will return true.
// Expected Output:

// 1
// 1
// 0

#include<stdio.h>
#include<stdbool.h>

bool test(int x, int y) ; 

int main(){

    printf("%d",test(10,10))  ; 
    
    return 0 ; 
}

bool test(int x, int y){
    if((x == 30) || (y == 30) || (x+y == 30)){
        return true ; 
    }else{
        return false ; 
    }
}