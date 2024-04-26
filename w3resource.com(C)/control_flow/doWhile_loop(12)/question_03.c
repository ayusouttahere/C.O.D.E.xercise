// 3. Write a C program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops.

#include<stdio.h>

int main(){
    // intialising odd and even numbers to first even and odd nums
    int odd = 0 ; 
    int even = 0 ; 
    int i = 1 ; // for loop iteration 

    do{
        if((i%2) == 0){
            even += i ; 
        }else{
            odd += i ; // adding i to prev. odd integer's sum. 
        }

        i++ ; //incrementing i for loop to meet condition true at some point 
    }while(i <= 50); 

    //output 
    printf("\nODD's sum is : %d",odd); 
    printf("\nEVEN's sum is : %d",even); 

    return 0 ; 
}