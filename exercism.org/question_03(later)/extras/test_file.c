#include<stdio.h>

int isogram(char *phrase); 

int length(char arr[]);  

int main(){
    char name[] = "carti" ; 
    printf("size of the above character is : %d",size(name)) ; 
    
}

int isogram(char *phrase){
    for(int i=0; i<= size(phrase); i++){
        for(int j = 0 ; j <=size(phrase); j++){
            if(phrase[i] == phrase[j]){
                return 1 ;  
            }
        }
    }
    return 0 ; 
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