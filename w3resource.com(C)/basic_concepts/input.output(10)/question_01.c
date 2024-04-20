// 1. Write a program that converts Centigrade to Fahrenheit.
// Expected Output :
// Input a temperature (in Centigrade): 45
// 113.000000 degrees Fahrenheit.
// Click me to see the solution

#include<stdio.h>

int main(){
    //initialisation 
    int centigrade ; 
    float fahrenheit ; // temp in fahrenheit 
    
    //input temperature in Centigrade. 
    printf("Enter Temperature (in Centigrade) : ") ;
    scanf("%d",&centigrade); 

    // conversion 
    fahrenheit = (centigrade * 9/5) + 32 ; 

    //output   
    printf("\n%f degrees Fahrenheit !",fahrenheit);



    return 0 ; 
}