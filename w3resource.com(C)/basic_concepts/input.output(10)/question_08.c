// 8. Write a program in C to calculate the sum of three numbers with input on one line separated by a comma.
// Expected Output :
// Input three numbers separated by comma : 5,10,15
// The sum of three numbers : 30

#include<stdio.h>

int main(){
    // initialisation 
    int n1, n2, n3 ; // for num1,num2 and num3 ; 
    int sum ; // sum of all 3 integers 

    //user input (in one line ); 
    printf("Enter three nubmers (seperated by commas) :") ; 
    scanf("%d,%d,%d", &n1, &n2, &n3); 

    //caluclating sum 
    sum = n1+n2+n3 ; 

    //output 
    printf("\nSUM IS : %d",sum) ; 
    return 0 ; 
}