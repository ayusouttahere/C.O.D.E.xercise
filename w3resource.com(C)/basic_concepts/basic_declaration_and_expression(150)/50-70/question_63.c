// 63. Write a C program that accepts a positive integer n less than 100 from the user. It prints out the sum of 14 + 24 + 44 + 74 + 114 + • • • + m4. In this case, m is less than or equal to n. Print an appropriate message.
// Input a positive number less than 100: 68
// Sum of the series is 37361622

#include<stdio.h>


int main(){
    int num ; 
    printf("input a positive integer number less than 100") ; 
    scanf("%d",&num); 

    if(num > 100){
        return 0 ; 
    }

    int sum ;
    int j = 1 ; 
    for(int i = 1 ; j <= num ; i++){
        sum += j * j * j * j   ;
    }    

    printf("sum is %d",sum); 
    return 0 ; 
}