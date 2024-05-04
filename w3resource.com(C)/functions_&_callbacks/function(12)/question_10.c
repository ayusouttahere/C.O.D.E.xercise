// 10. Write a program in C to print all perfect numbers in a given range using the function.
// Test Data :
// Input lowest search limit of perfect numbers : 1
// Input lowest search limit of perfect numbers : 100
// Expected Output :

//  The perfect numbers between 1 to 100 are :                                      
//  6   28  

#include<stdio.h>

int perfect(int x) ; 
void printPerfect(int min, int max) ; 

int main(){
    
    printPerfect(1,100) ; 

    return 0 ; 
}

int perfect(int x){
    int sopd ; // sum of propper divisior 
    int sum = 0 ; 
    for(int i = 1 ; i <= x/2 ; i++){
        if(x%i == 0){
            sum+=i ; 
        }
    }
    if(sum == x){
        return 1 ;
    }else{
        return 0 ; 
    }
}

void printPerfect(int min, int max){
    printf("perfect numbers in given range are : ") ; 

    for(int i = min ; i<= max ; i++){
        if(perfect(i)){
            printf("%d\t",i) ; 
        }
    }
    
    return ; 

}