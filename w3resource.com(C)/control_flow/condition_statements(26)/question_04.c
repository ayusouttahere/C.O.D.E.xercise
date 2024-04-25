// 4. Write a C program to find whether a given year is a leap year or not.
// Test Data : 2016
// Expected Output :
// 2016 is a leap year.

#include<stdio.h>

void isLeapYear(int x) ; 

int main(){
    
    isLeapYear(2016); 

    return 0 ; 
}

void isLeapYear(int x){
    if((x/400 == 0)&&((x/4 == 0) || (x/100 != 0) )){
        printf("\nis a Leap Year !"); 
        return ; 
    }

    printf("isn't a Leap Year !") ; 
    return ;

}