// 13. Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
// Temp < 0 then Freezing weather
// Temp 0-10 then Very Cold weather
// Temp 10-20 then Cold weather
// Temp 20-30 then Normal in Temp
// Temp 30-40 then Its Hot
// Temp >=40 then Its Very Hot
// Test Data :
// 42
// Expected Output :
// Its very hot.

#include<stdio.h>
#include<stdlib.h>

void checkweather(int temp); 

int main(){ 
    system("clear") ; 

    // initialisation and user input 
    int temp ; 
    printf("\nEnter Temperature : ") ; 
    scanf("%d",&temp); 
    
    // function call 
    checkweather(temp); 
    
    return 0 ; 
}

void checkweather(int temp){
    if(temp < 0){
        printf("\nit's freezing temp! "); 
    }else if((temp > 0) && (temp < 10)){
        printf("\nVery Cold Weather ") ; 
    }else if((temp >10)&&(temp<20)){
        printf("\nCold Weather ") ; 
    }else if((temp > 20) && (temp < 30)){
        printf("\nNormal Temp") ; 
    }else{
        printf("\nHot Temperature") ; 
    }
    return ; 
}