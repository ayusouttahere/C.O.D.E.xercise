// 3. Write a C program that accepts three integers from the user and finds the second largest number among them.
// Constraints:
// 1≤ x ≤100
// 1≤ y ≤100
// 1≤ z ≤100

// Sample Date:
// (1 , 2, 3) -> 2
// (10, 12, 24) -> 12
// (34, 21, 30) -> 30

#include<stdio.h>

void input(int *num); // function to input an integer 
int test(int x, int y, int z); //function to check if x is exclusive bw y and z.

int main(){
    //initialising integers 
    int num1 = -1 , num2 = -1 , num3 = -1 ; 

    // taking input with given constraints
    while(num1 > 100 || num1 < 0){
        printf("Enter First Integer :"); 
        input(&num1); 
    }

    while(num2 > 100 || num2 < 0){
        printf("Enter Second Integer :"); 
        input(&num2); 
    }

    while(num3 > 100 || num3 < 0){
        printf("Enter Third Integer :"); 
        input(&num3); 
    }   

    //checking condition for for 3 numbers exclusively 
    if(test(num1,num2,num3))
    printf("%d \n ",num1); 
    else if(test(num2,num1,num3))
    printf("%d \n",num2);
    else
    printf("%d",num3); 
     
    return 0 ; 
}

void input(int *num){
    scanf("%d",num); 
}

int test(int x, int y, int z){
    if((x>=y && x<=z)||(x <= y && x >=z )){
        return 1 ; //return 1 if condition is true
    }else{
        return 0 ; // return 0 if condition is false 
    }
}