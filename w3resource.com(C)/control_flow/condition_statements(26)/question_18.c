// 18. Write a C program to calculate profit and loss on a transaction.
// Test Data :
// 500 700
// Expected Output :
// You can booked your profit amount : 200

#include<stdio.h>

void ifProfit(int amountsent, int amountrecieved) ; 

int main(){

    ifProfit(700,500) ; 
    
    return 0 ; 
}

void ifProfit(int amountsent, int amountrecieved){
    if(amountrecieved <= amountsent){
        printf("\nLOSS."); 
    }else if(amountrecieved >= amountsent){
        printf("\nPROFIT."); 
    } 
    return  ;
}