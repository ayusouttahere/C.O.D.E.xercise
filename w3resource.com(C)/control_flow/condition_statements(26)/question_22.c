// 22. Write a program in C to read any digit and display it in the word.
// Test Data :
// 4
// Expected Output :
// Four

#include<stdio.h>

void no2digit(int digit);

int main()
{
    int digit ; //day name 
    printf("Enter a Day Number : ");
    scanf("%d",&digit) ;
    
    no2digit(digit) ; 
    
}

void no2digit(int digit){
    switch(digit){
        case 1 : printf("One");
        break ;
        case 2 : printf("Two");
        break ;
        case 3 : printf("Three");
        break ;
        case 4 : printf("Four");
        break ;
        case 5 : printf("Five");
        break ;
        case 6 : printf("Six");
        break ;
        case 7 : printf("Seven");
        break ;
        
    }
}