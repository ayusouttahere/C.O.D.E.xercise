// 5. Write a C program that accepts a sequence of different values and calculates the sum of the values before and after the maximum value.
// The sum of the values before the maximum value is 0, if there are no values before the maximum. Similarly, the sum of the values after the maximum value is 0, if there are no values after the maximum.
// Sample Date:

// 1 2 3 -> 3 0
// 1 2 9 4 5 -> 3 9
// 2 2 2 2 -> 0 6

#include<stdio.h>

int main(){
    int max, nums[100] ; // max to store largest array element's index and an array to store integers
    int sum_before_max = 0 , sum_after_max = 0; // to store sum before and after maximum values ; 

    // user input for integers : 
    int N ; // to store the size of array
    printf("Enter the Number of Elements you want to insert : ") ; 
    scanf("%d",&N); 

    for(int i = 0 ; i < N ; i++){ 
        printf("Enter Integers (%d/%d) : ",i+1,N) ; 
        scanf("%d",&nums[i]) ; 
    }

    //printing array 
    for(int i = 0 ; i < N ; i++){ 
        printf("%d\t",nums[i]) ;  
    }
    
    //finding maximum element's index
    int index_max = 0 ; 
    for(int i = 0 ; i < N ; i++){ 
        if(nums[i] > nums[index_max]){
            index_max = i ;
        }   
    }   
    

    // finding sum before and after max 
    // before max : 
    for(int i = 0 ; i < index_max ; i++){ 
       sum_before_max += nums[i] ; 
    }
     
    // after max : 
    for(int i = index_max + 1 ; i < N ; i++){ 
        sum_after_max += nums[i] ; 
    }
    
    //printing output : 
    printf("\nSum Befor Maximum Value is : %d\n",sum_before_max); 
    printf("Sum After Maximum Value is : %d",sum_after_max) ; 
    
    return 0 ; 

}