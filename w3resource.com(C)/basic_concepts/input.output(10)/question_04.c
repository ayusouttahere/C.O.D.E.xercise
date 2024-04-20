// 4. Write a C program that converts kilometers per hour to miles per hour.
// Expected Output :
// Input kilometers per hour: 15
// 9.320568 miles per hour

#include<stdio.h>

int main(){
    // initialisation 
    int kmph ; // speed kilometer per hour ;
    float mph ; // miles per hour 
    
    //user input 
    printf("Input Speed (in kmph) :"); 
    scanf("%d",&kmph); 

    // conversion 
    mph = kmph / 1.609344 ;

    //output 
    printf("\n%f Miles/Hour.",mph) ;  
    
    return 0 ; 
}