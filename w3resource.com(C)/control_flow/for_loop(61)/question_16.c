// 16. Write a C program to display the sum of n terms of even natural numbers.
// Test Data :
// Input number of terms : 5
// Expected Output :
// The even numbers are :2 4 6 8 10
// The Sum of even Natural Number upto 5 terms : 30

#include<stdio.h>
int main(){
    int sum = 0 ; //variable to store sum
    int count = 1 ; // to count iterations 
    // user input for n ; 
    int n ; 
    printf("\nEnter the terms : "); 
    scanf("%d",&n) ;

    for(int i=1; count<=n ; i++){
        if(i%2 == 0){
            printf("%d\t",i) ;
            sum += i  ; //adding them numbers up  
            count++ ; 
        }
    }

    printf("\nSum of all the even n terms upto %d is : %d", n, sum) ;
    return 0 ;
}