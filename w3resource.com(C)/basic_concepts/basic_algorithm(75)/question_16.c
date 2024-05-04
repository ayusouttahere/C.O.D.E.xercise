// 16. Write a C program to check if a triple is present in an array of integers or not. If a value appears three times in a row in an array it is called a triple.
// Expected Output:

// 0
// 0
// 1

#include<stdio.h>

int test(int arr[], int size){
    for(int i=0 ; i < size ; i++){
        if((arr[i] == arr[i+1]) && (arr[i+1] == arr[i+2]) ){
            printf("tripple") ; 
            return 1 ;
        }
    }

    printf("not tripple!!") ; 
    return 0 ; 
    
} 

int main(){
    int size = 7 ; 
    int myarr[] = {1,2,3,3,3,4,5} ; 

    int t = test(myarr,size) ; 


    return 0 ; 
}