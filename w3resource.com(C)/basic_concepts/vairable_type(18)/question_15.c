// 15. Write a C program to set a function that will be executed on termination of a program. 

// Expected Output :

// This is the message from main function.                                
//  Here is the message returning from newFunctionTwo.                     
//  Here is the message returning from newFunctionOne.

#include<stdio.h>
#include<stdlib.h>

void fun1() ; 
void fun2() ; 

int main(){
    
    // atexit function, the order in which these functions are executed at program termination is the reverse of the order in which they were registered.
    atexit(fun1) ; 
    atexit(fun2) ; 

    printf("\nThis is a message form main function !") ; 
    
    return 0 ; 

}

void fun1(){
    puts("\nThis is a message from First Function !") ;
}

void fun2(){
    puts("\nThis is a message from Second Function !") ;
}