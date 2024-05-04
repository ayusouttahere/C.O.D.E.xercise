// 1. Write a program in C to check whether a given number is an ugly number or not.

// Expected Output :
// Input an integer number: 25
// It is an ugly number.

    // UGLY NUMBERS : 
    // Ugly numbers are numbers whose only prime factors are 2, 3 or 5

#include<stdio.h>

void isUgly(int x) ; 
int cPrimeFactor(int x); 
int isPrime(int x); 
int checkfactors(int x); 

int main(){
    
    int num ; 
    //user input for num 
    printf("\nEnter a Number :") ; 
    scanf("%d",&num) ; 

    isUgly(num) ; 

    


    return 0 ;
}

void isUgly(int x){
    if((cPrimeFactor(x)==2) || (cPrimeFactor(x)==3) || (cPrimeFactor(x)==5) ){
        printf("\nIS UGLY") ; 
    }else{
        printf("\nISN'T UGLY" ) ; 
    }
}

int cPrimeFactor(int x){
    for(int i = 0 ; i < x ; i++){
        if(checkfactors(x) == isPrime(x)){
            return 1 ; 
        }
    }
    return 0 ; 
}

int isPrime(int x){
    if(x < 2){
        return 0 ; 
    }
    for(int i = 0 ; i*i < x ; i++){
        if((x%i) == 0){
            return 0 ; 
        }
    }
    return 1 ; 
}

int checkfactors(int x){
    for(int i = 0 ; i < (x/2) ; i++){
        if(x/i == 0){
            return 1  ; 
        }
    }
    return 0 ; 
}