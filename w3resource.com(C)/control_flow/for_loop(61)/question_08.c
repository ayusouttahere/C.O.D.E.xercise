// 8. Write a C program to display the n terms of odd natural numbers and their sum.
// Test Data
// Input number of terms : 10
// Expected Output :
// The odd numbers are :1 3 5 7 9 11 13 15 17 19
// The Sum of odd Natural Number upto 10 terms : 100

#include<Stdio.h>

int main(){
    // user input for n ; 
    int n ; 
    printf("Enter the number of terms : "); 
    scanf("%d",&n) ; 

    int sum = 0 ; // variable to store sum ; 
    // printing n odd natural numbers and calculating their sum
    int count = 1 ; //to count the number of terms for loop termination 
    
    printf("\nThe Odd numbers are : ") ; 
    for(int i = 0 ; count <=n ; i++){
        if(i%2 != 0){
            printf("\t%d",i) ; ; 
            sum += i ;
            count ++ ; //updating count to terminate loop when it's value reaches n 
        }
    }

    printf("\nSum is : %d",sum) ;

    return 0; 
}