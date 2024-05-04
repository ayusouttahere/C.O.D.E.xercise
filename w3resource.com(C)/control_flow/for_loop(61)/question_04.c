// 4. Write a program in C to read 10 numbers from the keyboard and find their sum and average.
// Test Data :
// Input the 10 numbers :
// Number-1 :2
// ...
// Number-10 :2
// Expected Output :
// The sum of 10 no is : 55
// The Average is : 5.500000

#include<stdio.h>

int main(){
    // user input for 10 numbers ; 
    int nums[10] ; //array to store those 10 numbers
    int sum = 0 ; //variable to store their sum 

    //for loop to take input multiple times
    for(int i = 0 ; i < 10 ; i++){
        printf("Input %d/10 Number : ",i+1); 
        scanf("%d",&nums[i]) ;

        sum += i ; //calculating sum for every value of i  
    }
    
    //calculating average : 
    int avg = sum/10  ; 
    
    //printing values : 
    printf("\nSum is : %d",sum) ; 
    printf("\nAverage is : %d",avg) ; 
    return 0 ; 
}