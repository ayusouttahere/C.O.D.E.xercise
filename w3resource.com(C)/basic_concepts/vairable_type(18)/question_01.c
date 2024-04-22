// 1. Write a C program that invokes the command processor to execute a command.

// Expected Output :

// Is command processor available?                                         
// Command processor available!                                            
// Executing command DIR                                                   
// 00c40280-5e27-11e6-bd4f-71e8825f8ea3                                    
// 01691610-41e1-11e6-901d-35b72ececc72                                    
// ...........
// ff827330-443a-11e6-9820-23e2f60d924e                                    
// file.txt                                                                
// logging_example.out                                                     
// test.txt                                                                
// Returned value is: 0.

#include<stdio.h>
#include<stdlib.h> //dk why 

int main(){
    int x ; // not known yet 
    
    //Printing a message to text for command processor's availability 
    printf("\nIs command processor available? \n") ;

    //check CP's availability 
    if(system(NULL)){
        printf("Command Processor Is Available!\n");
    }else{
        printf("Command Processor not Available!\n");
        exit(1) ; // used to terminate programs immediately 
    }

    printf("Executing Command DIR\n") ; 

    x = system("dir") ;  // this executes a shell command on Command line 

    printf ("Returned value is: %d.\n",x);

    return 0;


    return 0 ; 
}