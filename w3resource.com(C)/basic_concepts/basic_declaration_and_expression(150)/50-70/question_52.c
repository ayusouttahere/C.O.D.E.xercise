// 52. Write a C program to read an array of length 6 and find the smallest element and its position.
// Test Data:
// Input the length of the array: 5 Input the array elements:
// 25
// 35
// 20
// 14
// 45
// Expected Output:
// Smallest Value: 14
// Position of the element: 3

#include<stdio.h>

int main(){
    int num[5] ; 
    
    for(int i = 0 ; i < 5 ; i++){
        printf("insert elements : ") ; 
        scanf("%d",&num[i]) ;
    }

    // finding smallest number and it's position ; 
    int smallest_no, index ; 
    
    smallest_no = num[0] ; 
    for(int i = 0; i < 5 ; i++){
        if(num[i] <= smallest_no){
            smallest_no = num[i] ; 
            index = i ; 
        }
    }

    // printing : 
    printf("Smallest Number %d is at %dth position]",smallest_no, index+1) ; 
    return 0 ; 
}