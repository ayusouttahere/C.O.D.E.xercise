// 6. Write a C program that checks two given temperatures and returns true if one temperature is less than 0 and the other is greater than 100, otherwise it returns false.
// Expected Output:

// 1
// 1
// 0


#include<stdio.h>

int check(int temp1, int temp2) ;

int main(){
    // testing function 
    int tesst = check(-1,101) ; 
    printf("\t%d",tesst) ; 
    return 0 ;  
}

int check(int temp1, int temp2){
    if((temp1 < 0)&&(temp2 < 0) || (temp1 > 100)&&(temp2 > 100)){
        return 1 ; 
    }else{
        return 0 ; 
    }
}