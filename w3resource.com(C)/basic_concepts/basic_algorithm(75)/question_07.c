// 7. Write a C program to check two given integers whether either of them is in the range 100..200 inclusive.
// Expected Output:

// 1
// 0
// 1

#include<Stdio.h>

int test(int x, int y); 

int main(){
    int num = test(100,200) ; 

    printf("\n\n%d",num) ; 
    return 0 ; 
}

int test(int x, int y){
    if(((x >= 100) && (x <= 200)) || ((y >= 100) && (y <= 200))){
        return 1 ; 
    }else{
        return 0 ; 
    }
}