// 6. Write a program in C that takes minutes as input, and display the total number of hours and minutes.
// Expected Output :
// Input minutes: 546
// 9 Hours, 6 Minutes

#include<stdio.h>

int main(){
    //initialisation
    int m ; //minutes 
    int t_hours, t_minutes ; // total hours and minuts 

    // user input 
    printf("Input Minutes : ") ; 
    scanf("%d",&m) ; 

    // caluclting total hours and minutes 
    t_hours = m/60 ; 
    t_minutes = m%60 ; 
    
    //output 
    printf("\n%d Hors & %d Minutes.",t_hours,t_minutes) ; 
    return 0 ; 
}