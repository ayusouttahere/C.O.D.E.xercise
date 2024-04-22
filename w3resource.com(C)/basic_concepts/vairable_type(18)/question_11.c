// 11. Write a C program to allocate a block of memory for an array. 

// Test Data and Expected Output :

// Input the number of elements to be stored in the array :5               
// Input 5 elements in the array :                                         
//  element 1 : 25                                                         
//  element 2 : 30                                                         
//  element 3 : 35                                                         
//  element 4 : 20                                                         
//  element 5 : 40                                                         
//  Values entered in the array are :                                      
//  25  30  35  20  40           

#include<stdio.h>
#include<stdlib.h>

int main(){
    // initialisation 
    int N, num ; 
    int *myarr ;  // pointer to my array

    // user input
    printf("Enter the number of elements to be stored in the array : ") ; 
    scanf("%d",&N) ;

    printf("Input %d elements in the array!\n",N) ; 

    myarr = (int*) calloc(N,sizeof(int)); 
    
    if(myarr == NULL){
        printf("Requested memory allocation isn't correct !\n");
        exit(1) ; 
    }

    // taking inegers as input 
    for(int i = 0 ; i < N ; i++){
        printf("Element %d : ",i+1) ;
        scanf("%d",&myarr[i]) ; 
    }

    // printing array 
    printf("\nPrinting all the elements in array : "); 
    for(int i = 0 ; i < N ; i++){
        printf("%d\t",myarr[i]) ; 
    }

    free(myarr) ; 

    if(myarr == NULL){
        printf("PROGRAM DONE SUCCESSFULLY !! \n");
        exit(1) ; 
    }
    
    return 0 ;
}