#include<stdio.h>

int length(char arr[]); 

int main(){

}

int length(char arr[]){
    int x=0 ; 
    int i = 0 ; 
    while(arr[i] != '\0'){
        x++ ; 
        i++ ;  
    }
    return x ;
}