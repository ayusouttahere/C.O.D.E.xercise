// 26. Write a program in C which is a Menu-Driven Program to perform a simple calculation.
// Test Data :
// 10
// 2
// 3
// Expected Output :
// The Multiplication of 10 and 2 is: 20

#include<stdio.h>
#include<stdlib.h>

// function to perform upon user input 
void add() ; 
void sub() ; 
void multi() ; 
void divvv();

int main(){
    // initialisation ; 
    int choice ; 
    printf("\t\t\t\t\t\t ***SIMPLE CALUCLATION*** \n"); 
    printf("\n '1' for ADDITION. \n '2' for SUBTRACTION. \n '3' for MULTIPLICATION. \n '4' for DIVISION. \n") ; 
    printf("ENTER A NUMBER : ") ; 
    scanf("%d",&choice) ; 

    switch(choice){
        case 1 : add() ; 
        break ; 
        case 2 : sub() ; 
        break ; 
        case 3 : multi(); 
        break ; 
        case 4 : divvv() ; 
        break ; 
    }

    return 0 ; 
}

void add(){
    int integer1, integer2 ;
    printf("\nEnter a Number : ") ;
    scanf("%d",&integer1) ; 
    printf("\nEnter another Number : ") ; 
    scanf("%d",&integer2) ; 
    printf("\n\t\t\tCALCULATED ANSWER IS : %d",integer1+integer2) ; 
}
void sub(){
    int integer1, integer2 ;
    printf("\nEnter a Number : ") ;
    scanf("%d",&integer1) ; 
    printf("\nEnter another Number : ") ; 
    scanf("%d",&integer2) ; 
    printf("\n\t\t\tCALCULATED ANSWER IS : %d",integer1-integer2) ; 
}
void multi(){
    int integer1, integer2 ;
    printf("\nEnter a Number : ") ;
    scanf("%d",&integer1) ; 
    printf("\nEnter another Number : ") ; 
    scanf("%d",&integer2) ; 
    printf("\n\t\t\tCALCULATED ANSWER IS : %d",integer1*integer2) ; 
}
void divvv(){
    int integer1, integer2 ;
    printf("\nEnter a Number : ") ;
    scanf("%d",&integer1) ; 
    printf("\nEnter another Number : ") ; 
    scanf("%d",&integer2) ; 
    printf("\n\t\t\tCALCULATED ANSWER IS : %d",integer1/integer2) ; 
}