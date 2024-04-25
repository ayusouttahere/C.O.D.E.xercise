// 8. Write a C program to find the largest of three numbers.
// Test Data : 12 25 52
// Expected Output :
// 1st Number = 12,        2nd Number = 25,        3rd Number = 52
// The 3rd Number is the greatest among three

#include<stdio.h>

int largest(int i1, int i2, int i3) ; 

int main(){

    // initialisation ; 
    int i1, i2, i3, largest_int ; 

    // user input and function call 
        
        printf("Enter an integer : ") ; 
        scanf("%d",&i1) ; 
        printf("Enter an integer : ") ; 
        scanf("%d",&i2) ; 
        printf("Enter an integer : ") ; 
        scanf("%d",&i3) ;

    //function call to assign largest value to 'largest ; 
    largest_int = largest(i1,i2,i3) ; 

    printf("Largest Integer is : %d",largest_int) ; 

    return 0 ; 
}

int largest(int i1, int i2, int i3){
    if(i1 > i2){
        if(i1 > i3){
            return i1 ; 
        }else{
            return i3 ;
        }
    }{
        if(i2 > i3){
            return i2 ;
        }else{
            return i3 ;
        }
    }
}