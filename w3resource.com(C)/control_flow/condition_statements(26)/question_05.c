// 5. Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
// Test Data : 21
// Expected Output :
// Congratulation! You are eligible for casting your vote.

#include<stdio.h>

void eligible2vote(int age); 

int main(){
    eligible2vote(19); 
    eligible2vote(17); 
    eligible2vote(18); 
    return 0 ; 
}

void eligible2vote(int age){
    if(age >= 18){
        printf("\nis Eligible to vote !") ;
        return 0 ; 
    }
    printf("\nisn't Eligible to vote ! ") ; 
    return ; 
}