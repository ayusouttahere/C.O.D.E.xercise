// 17. Write a C program to abort the current process. 

// Expected Output :

//  File does not exist or error, in opening the file.                                                           
// timeout: the monitored command dumped core                                                                    
// Aborted  

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    FILE * fileptr ; 
    fileptr = fopen("myfile.txt","r") ; 

    if (fileptr == NULL){    // Check if the file could not be opened.
        fputs ("\n File does not exist or error, in opening the file.\n",stderr);   // Print an error message.
        abort();   // Terminate the program abnormally.
    }
    fclose (fileptr);

    return 0 ; 
}
