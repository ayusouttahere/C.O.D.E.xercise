// 12. Write a C program to find the maximum and minimum of some values using a function that returns an array.
// Test Data :
// Input 5 values
// 25
// 11
// 35
// 65
// 20
// Expected Output :

// Number of values you want to input: Input 5 values
// Minimum value is: 11
// Maximum value is: 65  

#include<stdio.h>

int min(int arr[], int size) ; 
int max(int arr[], int size) ; 

int main(){
    int nums[] = {25,11,35,65,20} ; 
    int size = 5 ; 

    printf("\nMax of array is : %d",max(nums,size)) ; 
    printf("\nMin of array is : %d",min(nums,size)) ;

    return 0 ; 
}

int min(int arr[], int size){
    int min = arr[0] ; 
    for(int i = 0 ; i<size ; i++){
        if(arr[i] < min){
            min = arr[i] ; 
        }
    }
    return min ; 
}

int max(int arr[], int size){
    int max = arr[0] ; 
    for(int i = 0 ; i<size ; i++){
        if(arr[i] > max){
            max = arr[i] ; 
        }
    }
    return max ; 
}