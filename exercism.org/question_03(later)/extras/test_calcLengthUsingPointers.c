#include<stdio.h>

int length(char* arr ); 

int main(){
    char s_string[] = "SLIMESHIT" ;
    printf("Length of %s is equal to : %d",s_string, length(s_string)) ; 
    return 0 ; 
}


int length(char* arr ){
    int length=0 ; 
    while(*arr != '\0'){
        arr++ ; 
        length++ ; 
    }
    return length ; 
}