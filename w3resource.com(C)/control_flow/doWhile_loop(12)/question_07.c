// 7. Write a C program that calculates the average of a set of numbers input by the user. The user should be able to input as many numbers as desired, and the program should continue until the user decides to stop.

#include<stdio.h>

int main(){
    int num ; 
    int count = 0 ; //to count the entered numbers 
    int sum = 0 ; // for counting sum

    do{
        printf("\nEnter a Number : ") ; 
        scanf("%d",&num) ; 
        sum+=num ; 
        count ++ ;
    }while(num != 0 ) ; 

    int avg = sum/count ; //finding sum.

    printf("AVERAGE IS %d",avg) ; 


    return 0 ; 
}