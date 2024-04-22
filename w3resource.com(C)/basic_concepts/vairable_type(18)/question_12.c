// 12. Write a C program to perform a binary search in an array. 

// Test Data and Expected Output :

// Input the number of elements to be stored in the array :5               
// Input 5 elements in the array :                                         
// element - 1 : 25                                                        
// element - 2 : 20                                                        
// element - 3 : 18                                                        
// element - 4 : 13                                                        
// element - 5 : 15                                                        
//  Input a value to search : 18                                           
// 18 is found in the array.      

#include<stdio.h>
#include<stdlib.h>

int main(){
    int N ; // Number of elements in an array 
    int * arr ; 
    
    // user input for Size of array : 
    printf("Input the number of elements to be stored in the array : ") ; 
    scanf("%d",&N) ; 

    //dynamically initialising array : 
    arr = (int*)calloc(N,sizeof(int)) ; 
    
    // taking array elements in input 
    printf("\nInput %d elements in the array : \n") ; 
    for(int i = 0 ; i < N ; i++){
        printf("element - %d : ",i+1) ; 
        scanf("%d",&arr[i]) ; 
    }

    // sorting array first : 
    printf("\nSorted array is : "); 

    for(int i = 0 ; i < N-1 ; i++){
        for(int j = i+1 ; j < N ; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i] ; 
                arr[i] = arr[j] ; 
                arr[j] = temp ; 
            }
        }
    }

    for(int i = 0 ; i < N ; i++){
        printf("%d\t",arr[i]) ;  
    }

    // inputs ; 
    int search4 ;  // integer to search for
    printf("\n Input a Value to Search : ") ; 
    scanf("%d",&search4) ; 
    
    // //initialisation of min max and mid 
    int low, mid, high ; 

    low = 0 ; 
    high = N-1 ; 
    
    while(low < high){
        mid = (low + high)/2 ; 
        if(arr[mid] == search4){
            printf("FOUND IN ARRAY !!") ; 
            return 0 ; 
        }
        if(arr[mid]<search4){
            low = mid+1 ; 
        }else{
            high = mid-1 ; 
        }
    }

    printf("ISN'T FOUND IN ARRAY !!" ) ; 
    return 0 ; 
}