// 7. Write a C program that accepts three integers: A, B, and X. Find the smallest absolute value of the difference between X and the integers between A and B.
// Sample Date:

// Input A, B: 7, 11
// C: 20
// Smallest absolute value of difference between X and integers between A and B (inclusive): 11
// Input A, B: 1, 5
// C: 4
// Smallest absolute value of difference between X and integers between A and B (inclusive): 4

#include<stdio.h>

int main(){
    //initialising 
    int A, B, X ; 

    //User Inputs 
    printf("Integer First Integer of Range (A) : "); 
    scanf("%d",&A); 

    printf("Integer Last Integer of Range (B) : "); 
    scanf("%d",&B); 

    printf("Integer X (value to find difference of) : "); 
    scanf("%d",&X); 

    // calculating 
    int smallestDifference = X ; //absolute smallest difference between...
    int smallestIteration ; 
    for(int i = A ; i <= B ; i++){
        if(X-i < smallestDifference){
            smallestDifference = X-i ;
            smallestIteration = i ; // i don't know how i did it, i just did it ! and it was tough !!!!!  
        }
    }

    printf("\nSmallest Difference is : %d",smallestIteration) ; 
    
    //ALTERNATE METHOD : 
    // if (X < A){
    //     printf("%d\n", A); // Print A if X is less than A
    // }else if (X > B){
    //     printf("%d\n", B); // Print B if X is greater than B
    // }else{
    //     printf("%d\n", X); // Print X if it falls between A and B
    // }
    
    return 0 ; 
}