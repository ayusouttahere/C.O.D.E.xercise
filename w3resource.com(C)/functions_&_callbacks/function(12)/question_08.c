// 8. Write a program in C to get the largest element of an array using the function.
// Test Data :
// Input the number of elements to be stored in the array :5
// Input 5 elements in the array :
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// element - 3 : 4
// element - 4 : 5
// Expected Output :

// The largest element in the array is : 5   

#include<stdio.h>

int largest(int arr[], int size) ; 

int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9,99,12} ; 
    printf("\n%d",largest(arr,11)) ; 

    return 0; 
}

int largest(int arr[], int size){
    int max = 0 ; 
    for(int i = 0 ; i < size ; i++){
        if(arr[i] > max){
            max = arr[i] ; 
        }
    }

    return max ; 
}