
#include<stdio.h>

int main(){
    for(int i = 1 ; i < 200 ; i ++){
        if((i/i == 0) || (i/1 == 0)){
            printf("%d \t ",i) ; 
        }
    }
    return 0 ; 
}