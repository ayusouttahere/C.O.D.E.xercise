// 60. Write a C program to create enumerated data types for 7 days and display their values in integer constants.
// Sun = 0
// Mon = 1
// Tue = 2
// Wed = 3
// Thu = 4
// Fri = 5
// Sat = 6

#include<stdio.h>


int main(){
    enum weekdays{
        Sun, Mon, Tue, Wed, Thu, Fri, Sat 
    }; 


    printf("Sunday is  : %d",Sun) ; 
    printf("Monday is  : %d",Mon) ; 
    printf("Tuesday is  : %d",Tue) ; 
    
    return 0 ; 
}