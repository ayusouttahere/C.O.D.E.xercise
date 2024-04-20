// 5. Write a C program that takes hours and minutes as input, and calculates the total number of minutes.
// Expected Output :
// Input hours: 5
// Input minutes: 37
// Total: 337 minutes.

#include<stdio.h>

int main(){
    // initialisation 
    int h ; // hours 
    int m ; // minutes 
    int total_minutes ; //total time in minutes 

    // user input 
    printf("Input Hours : ") ; 
    scanf("%d",&h) ; 

    printf("Input Minutes :"); 
    scanf("%d",&m) ; 

    // caluculatin total minutes 
    total_minutes = (60 * h) + m ; 

    //out put 
    printf("\nTotal : %d Minutes ",total_minutes) ; 

    return 0 ; 
}