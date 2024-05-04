// 12. Write a C program that takes two positive integer values as input and checks if either of them is in the range of 20 to 30 (inclusive). If at least one number falls in this range, the program returns the larger value. Otherwise, it returns 0.
// Expected Output:

// 0
// 30
// 25
// 28

#include<Stdio.h>

int test(int x, int y){
    if(((x>=20) && (x <= 30)) || ((y>=20) && (y <= 30)) ){
        if(x>y){
            return x ; 
        }else{
            return y ;
        }
    }else{
    return 0 ; }
}

int main(){
    
    int t = test(21,22) ; 
    printf("%d",t) ; 

    return 0 ; 
}