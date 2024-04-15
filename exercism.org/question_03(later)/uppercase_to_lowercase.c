#include<stdio.h>

char lowercase(char c); 

int main(){
    char capitalP = 'P' ;    
    char small_p = lowercase(capitalP) ; 
    printf("%c lowercased is : %c",capitalP,small_p); 
}

char lowercase(char c){
    c+=32 ; 
    return c ;  
}