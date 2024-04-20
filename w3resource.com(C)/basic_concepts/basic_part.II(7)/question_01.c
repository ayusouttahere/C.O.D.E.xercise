// 1. Write a C program that takes n number of positive integers. Find the integer that appears the least number of times among the said integers. If there are multiple such integers, select the smallest one.

// Sample Data:
// (1,2,3) -> 1
// (10, 20, 4, 5, 11) -> 4

#include<stdio.h>
int main(){
    
    // number of integers you'd like to input ;
    int n ; 
    printf("input the number of integers : "); 
    scanf("%d",&n); 

    // taking n number of user inputs ;
    int integers[n] ; // array to store n number of integers :  
    for(int i = 0 ; i < n ; i++){
        printf("input an integer for %dth index: ",i) ; 
        scanf("%d",&integers[i]); 
        if(integers[i] <= 0){
            break ; 
        }
    }

    int red[n] ; //red for redundance (will be using that to store values for re-occurring integers); 

    //filling in all red[i] values with 0 making it sparce array xD
    for(int i = 0 ; i < n ; i ++){
        red[i] = 0 ; 
    }


    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(integers[i] == integers[j]){
                red[i]++ ;             
            }
        }
    }

    int ln[10] ; // ln 4 least number (integer that occurred least number of times); 
    ln[0] = red[0] ; 
    for(int i = 0; i < n ; i++){
        if(ln[0] < red[i]){
            ln[0] = red[i] ; 
        }
        if(ln[0]==red[i+1]){
            ln[0+i] = red[i+1] ; 
        }
    }

    // printing smallest number from least number's array
    int sm = ln[0]; // sm 4 smallest number ; 
    for(int i = 0 ; i < 10 ; i++){
        if(ln[i] < sm){
            sm = ln[i] ; 
        }
    }

    //printing smallest number
    printf("\n smallest least occuring number is : %d",sm);  



    return 0 ; 
}