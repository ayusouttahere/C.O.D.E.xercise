// 24. Write a program in C to read any Month Number in integer and display the number of days for this month.
// Test Data :
// 7
// Expected Output :
// Month have 31 days

#include<stdio.h>

void daysin(int month); 

int main(){
    int month_num ; 
    printf("Enter a Month Number :") ;
    scanf("%d",&month_num) ; 

    daysin(month_num); 

    return 0 ; 
}

void daysin(int month){
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Month have 31 days. \n");  // Print a message for months with 31 days.
            break;
        case 2:
            printf("The 2nd month is a February and have 28 days. \n");  // Print a message for February with 28 days.
            printf("in leap year The February month  Have 29 days.\n");  // Print a message for February with 29 days in a leap year.
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Month have 30 days. \n");  // Print a message for months with 30 days.
            break;
        default:
            printf("Invalid Month number.\nPlease try again ....\n");  // Print a message for an invalid input.
            break;
    }
}