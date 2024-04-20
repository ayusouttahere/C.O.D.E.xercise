// 51. Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array.
// Test Data:
// Input the 5 members of the array:
// 15
// 20
// 25
// 30
// 35

// Expected Output:
// array_n[0] = 35
// array_n[1] = 30
// array_n[2] = 25
// array_n[3] = 20
// array_n[4] = 15

#include<stdio.h>

int main(){ 
    int arrSize = 5 ; 
    int num[arrSize] ;

    // input    
    for(int i = 0 ; i < arrSize ; i++){
        printf("input inegers of array : ") ; 
        scanf("%d",&num[i]); 
    }

    //output before : 
    printf(" \n array is : \t ") ;
    for(int i = 0 ; i<arrSize ; i++){
        printf("%d \t ",num[i] ); 
    }

    //swapping
    int temp ;  
    for(int i = 0 ; i <=arrSize ; i++){

        if(i < arrSize/2){
            temp = num[i] ; 
            num[i] = num[arrSize-(i+1)] ; 
            num[arrSize-(i+1)] = temp ; 
        }
    
    }

    //output after : 
    printf("\n array is : \t ") ;
    for(int i = 0 ; i< arrSize ; i++){
        printf("%d \t ",num[i] ); 
    }
    


    return 0 ; 
}