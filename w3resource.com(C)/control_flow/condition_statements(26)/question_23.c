// 23. Write a C program for reading any Month Number and displaying the Month name as a word.
// Test Data :
// 4
// Expected Output :
// April

#include<stdio.h>

void num2name(int month);

int main()
{
    int month ; //day name 
    printf("Enter a Day Number : ");
    scanf("%d",&month) ;
    
    num2name(month) ; 
    
}

void num2name(int month){
    switch(month){
        case 1 : printf("JAN");
        break ;
        case 2 : printf("FEB");
        break ;
        case 3 : printf("MAR");
        break ;
        case 4 : printf("APR");
        break ;
        case 5 : printf("MAY");
        break ;
        case 6 : printf("JUNE");
        break ;
        case 7 : printf("JULY");
        break ;
        case 8 : printf("AUG");
        break ;
        case 9 : printf("SEP");
        break ;
        case 10 : printf("OCT");
        break ;
        case 11 : printf("NOV");
        break ;
        case 12 : printf("DEC");
        break ;
        
    }
}