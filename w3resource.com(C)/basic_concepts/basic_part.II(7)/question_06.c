// 6. Write a C program that accepts a sequence of positive integers from the user and finds the longest continuous subsequence.
// Sample Date:

// Length of the sequence: 5
// Sequence: 5 2 3 4 1
// Length of longest ascending contiguous subsequence: 5 [2 3 4]
// Length of the sequence: 6
// Sequence: 10 20 30 40 50 60
// Length of longest ascending contiguous subsequence: 6 [10 20 30 40 50 60]
// Length of the sequence: 3
// Sequence: 5 1 3
// Length of longest ascending contiguous subsequence: 2 [1 3]

#include<stdio.h>

int main(){
    //initialisation : 
    int pos_int[100] ; //to store positive integers
    int N ; // Size of array pos_int  
    int count = 0 , max = 0  ; // to store a temp variable, count of continuous sub and max number of elements in sequence. 

    // user input : 
        // for N  :
    printf("Enter the Number of Elements in an array : ") ; 
    scanf("%d",&N) ; 
        // Elements in Array pos_int ; 
    for(int i = 0 ; i < N ; i++){
        printf("Input Positive Integers (%d/%d) : ",i+1,N) ; 
        scanf("%d",&pos_int[i]) ;
    }
    
    // printing array 
    for(int i = 0 ; i < N ; i++){
        printf("%d \t",pos_int[i]) ; 
    }

    //length of longest ascending contagious sequence 
    int i = 0 ; //for iteration 
    while(i < (N-1)){
        if(pos_int[i] <= pos_int[i+1]){
            count++ ; 
        }else{
            if(max < count){
                max = count ; 
            }
            count = 0 ; //resetting counter for new sequence 
        }
        i ++ ; 
    }

    // if last sequence in bigger that second last sequence : 
    if(max < count){
        max = count ; 
    }

    // printing output 
    printf("\nLength of longest ascending contiguous subsequence: %d\n",max+1);
    
    return 0 ; 
}