// 7. Write a C program to accept the height of a person in centimeters and categorize the person according to their height.
// Test Data : 135
// Expected Output :
// The person is Dwarf.

#include<stdio.h>

void cat(int height) ; // function to categorize 

int main(){

    //user input and function call
    printf("Enter height of a person : "); 
    int height ; 
    scanf("%d",&height) ; 

    cat(height) ; 

    return 0 ; 
}

void cat(int height){
    if(height <= 150){
        printf("\nThe person is Dwarf !") ; 
    }else if(height >= 150){
        printf("\nThe person is Tall !") ; 
    }
}