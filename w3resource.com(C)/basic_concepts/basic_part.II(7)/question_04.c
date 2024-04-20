// 4. Write a C program that accepts two sequences ((a1, a2, .. an), (b1, b2, .. bn)) of integers as input. Find all integers that appear in both sequences, one by one, in ascending order.
// Constraints:

// 1≤N1≤100, N1 -> number of integers in first sequence.
// 1≤N2≤100, N2 -> number of integers in second sequence.
// 1 ≤ ai≤ 100 ( 1 ≤ i ≤ N1 )
// 1 ≤ bj≤ 100 ( 1 ≤ j ≤ N2 )
// Sample Date:

// ( 1 2 3 1 2 3 4) -> 1 2 3
// ( 1 2 3 1 2 3) -> 1 2 3
// (1 2 3 4 5 6) ->

#include<stdio.h>
#define size 20  

int main(){
    // initialising both sequences using arrays 
    int seq1[size], seq2[size] ; 

    //taking inputs
    int count1 = 0, count2 = 0 ; // to count number of integers in a sequence  
    
    // for sequence 01 
    for(int i = 0 ; i < size ; i++){
        printf("Input Integer for SEQUENCE01 : ");
        scanf("%d",&seq1[i]); 
        count1++ ; 
        if(seq1[i] == 0){
            count1--; 
            break ; // 0 to exit taking inputs 
        } 
    }

    printf("\n \n "); 

    // for sequence 02 
    for(int i = 0 ; i < size ; i++){
        printf("Input Integer for SEQUENCE02 : ");
        scanf("%d",&seq2[i]); 
        count2++; // to count the number of elements in that sequence  
        if(seq2[i] == 0){
            count2-- ;  // removing the last element containing '0' from count 
            break ; 
        } 
    }
    
    int count = count1 + count2 ; 

    // creating a new aray containing only elements that exist in both arrays 
    int new_array[count] ; 
    int x = 0 ; 
    for(int i = 0 ; i < count1 ; i++ ){
        for(int j = 0 ; j < count2 ; j ++){
            if(seq1[i] == seq2[j]){
                new_array[x] = seq1[i]; 
                x++ ;
            }
        }
    }

    //sorting that new array in ascending order now : 
    for(int i = 0 ; i <= x-1 ; i++){
        for(int j = i+1 ; j <= x ; j++){
            if(new_array[j] < new_array[i]){
                int temp = new_array[i] ; 
                new_array[i] = new_array[j] ; 
                new_array[j] = temp ; 
            }
        }
    }

    
    //printing new array : 
    printf("Output is :") ; 
    for(int i = 0 ; i < x ; i++){
        printf("%d\t",new_array[i]); 
    }
    return 0 ; 
}