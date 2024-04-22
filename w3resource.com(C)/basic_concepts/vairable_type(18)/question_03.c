// 3. Write a C program to convert a string to a long integer.

// Expected Output :

// In decimals: 2016, 4235440, -3624422, 5947391.

#include<stdio.h>
#include<stdlib.h>

int main(){
    // intitialisation
    char str[20] ; 
    long int li ; //long integer 

    // user input 
    printf("Enter a number : ") ; 
    fgets(str,20,stdin) ; 

    //conversion ; 
    li = strtoul(str,NULL,0) ; 

    // out put 
    printf("\n Long Integer is : %d",li) ; 

    
    
    return 0 ; 
}