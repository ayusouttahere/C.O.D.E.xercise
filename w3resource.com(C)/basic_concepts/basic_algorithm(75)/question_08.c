// 8. Write a C program that checks if three given integers are in the range of 20 to 50 (inclusive) and returns true if at least one of them is within the range. If none of the integers are within the range, the program returns false.
// Expected Output:

// 1
// 1
// 1
// 0


#include<stdio.h>

int test(int x, int y, int z) ; 

int main(){
    
    int testt = test(15,25,25) ; 
    printf("\n%d",testt) ; 

    return 0 ; 
}

int test(int x, int y, int z){
    if( ((x >= 20) && (x <=50)) && ((y >= 20) && (y <=50)) && ((z >= 20) && (z <=50)) ){
        return 1 ; 
    }else{
        return 0 ; 
    }
}