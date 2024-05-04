#include<stdio.h>

void printnum(int n) ; 

int main(){
    
    int n = 1 ; 
    printnum(n) ; 

    return 0 ; 
}

void printnum(int n){
     
    if(n == 51){
        return ; 
    }

    printf("%d\t",n);
    printnum(n+1) ; 

}