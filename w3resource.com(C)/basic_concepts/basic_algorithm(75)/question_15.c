// 15. Write a C program to count the number of 5's adjacent to each other in an array of integers. Consider the situation where the second 5 is actually a 6.
// Expected Output:

// 1
// 2
// 1

#include<stdio.h>

int test(int arr[], int size){
    int count = 0 ;  
    for(int i=0 ; i<size ; i++){
        if((arr[i]==5) && (arr[i+1] == 5)){
            count++ ; 
        } 
        if((arr[i]==5) && (arr[i+1] != 5)){
            count++ ; 
        }
    }
    

    return count+1 ;
}

int main(){
    int size = 10 ;
    int arr[] = {1,2,3,5,5,7,5,5,8,7} ; 
    
    printf("%d",test(arr,size)); 
    
    return 0 ;
}