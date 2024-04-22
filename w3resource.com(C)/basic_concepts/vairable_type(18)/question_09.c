// 9. Write a C program to get the environment string.

// Expected Output :

// The set path is: /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin
// :/bin:/usr/games:/usr/local/games 

#include<stdio.h>
#include<stdlib.h>

int main(){
    char * pathptr ; 

    pathptr = getenv("path") ; 

    if(pathptr != NULL){
        printf("\nThe Set Path is : %s \n\n",pathptr); 
    } 
    
    return 0 ;  

}