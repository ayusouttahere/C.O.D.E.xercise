// 21. Write a C program to read any day number in integer and display the day name in word format.
// Test Data :
// 4
// Expected Output :
// Thursday

#include<stdio.h>

void toDayName(int day_no);

int main()
{
    int dn ; //day name 
    printf("Enter a Day Number : ");
    scanf("%d",&dn) ;
    
    toDayName(dn) ; 
    
}

void toDayName(int day_no){
    switch(day_no){
        case 1 : printf("Monday");
        break ;
        case 2 : printf("Tuesday");
        break ;
        case 3 : printf("Wednesday");
        break ;
        case 4 : printf("Thursday");
        break ;
        case 5 : printf("Friday");
        break ;
        case 6 : printf("Saturday");
        break ;
        case 7 : printf("Sunday");
        break ;
        
    }
}