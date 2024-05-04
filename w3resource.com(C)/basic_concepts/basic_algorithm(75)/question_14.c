// 14. Write a C program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere.
// Expected Output:

// 1
// 0
// 1
// Click

#include<Stdio.h>

int test(int arr[], int size ){
    for(int i = 0 ; i<size; i++){
        if(arr[i] == 1){
            if((arr[i+1])==2){
                if((arr[i+2])==3){
                    return 1 ; 
                }
            }
        }
    }
    return 0 ; 
}

int main(){
    int size = 7 ; //size of array 
    int arr[] = {4,5,1,3,7,7} ; 

    int t = test(arr,size) ;
    printf("%d",t) ; 

    return 0 ;
}