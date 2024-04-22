// 4. Write a C program to convert a string to a double.

// Expected Output :

// Output= 4.00


#include<stdio.h>
#include<stdlib.h>

int main(){
    // intitialisation
    char str[20] ; 
    double D ; // double  

    // user input 
    printf("Enter a number : ") ; 
    fgets(str,20,stdin) ; 

    //conversion ; 
    D = strtoul(str,NULL,0) ; 

    // out put 
    printf("\nDouble is : %f",D) ; 

    
    
    return 0 ; 
}