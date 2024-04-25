// 4. Write a C program to check a given integer and return true if it is within 10 of 100 or 200.
// Expected Output:

// 1
// 1
// 0

#include<stdio.h>
#include<stdbool.h>

bool test(int x) ;

int main(){
    printf("%d",test(11)) ; 
    return 0 ; 
}

bool test(int x){
    if((x<100) && (x>10)){
        return true ; 
    }else{
        return false ; 
    }
}  