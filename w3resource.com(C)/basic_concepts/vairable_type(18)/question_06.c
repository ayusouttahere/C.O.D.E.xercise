// 6. Write a C program to sort the elements of an array.

// Test Data and Expected Output :

// Input the number of elements to be stored in the array :5               
// Input 6 elements in the array :                                         
// element - 0 : 15                                                        
// element - 1 : 26                                                        
// element - 2 : 42                                                        
// element - 3 : 82                                                        
// element - 4 : 35                                                        
                                             
// After sorting the array are :                                           
// 15                                                                      
// 26                                                                      
// 35                                                                      
// 42                                                                      
// 82            

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    // system("clear") ; 
    
    // initialisation 
    int N ; // size of array ;

    // user input for size of array 
    printf("Input the SIZE of array :" ) ; 
    scanf("%d",&N); 

    //initialising array 
    int num[N] ;

    // user input for arrray integers 
    for(int i = 0 ; i < N ; i++){
        printf("\nElement - %d : ",i) ; 
        scanf("%d",&num[i]) ; 
    }

    //printing array before : 
    printf("\nArray before Sorting :\t") ; 
    for(int i = 0 ; i < N ; i++){
        printf("%d\t",num[i]) ;
    }   

    //sorting : 
    for(int i = 0 ; i < N-1 ; i++){
        for(int j = i+1 ; j < N ; j++){ 
            if(num[j]<num[i]){
                int temp = num[i] ; 
                num[i] = num[j] ; 
                num[j] = temp ; 
            }
        }
    }

    //printing array after  : 
    printf("\nArray after Sorting :\t") ; 
    for(int i = 0 ; i < N ; i++){
        printf("%d\t",num[i]) ;
    }   

    return 0 ; 
}