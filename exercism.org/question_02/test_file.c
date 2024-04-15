#include<stdio.h>

void check4armstrong(int candidate); 
int power(int number, int exponent); 
int main(){
    
    check4armstrong(153); 

    return 0 ; 
}

void check4armstrong(int candidate){
    //initialising exponent to get an exponential value to check 4 armstrong, compare to set a comparison and temp value...
    int temp, exponent=0, compare = 0 ; 
    //assigning candidate value to temp. so we don't loose it's actual value. 
    temp = candidate ; 
    while(candidate > 0){
        exponent ++ ; 
        candidate/=10 ; 
    }
    //resetting candidate :
    candidate = temp ;
    //setting up a value to compare
    while(candidate>0){
        if(candidate%10==1){
            compare += 1 ; 
        }
        compare += power(candidate%10,exponent) ;
        candidate/=10 ;  
    }   
    compare--; 

    //resetting candidate's value ;
    candidate = temp ; 
    
    printf("Exponent : %d",exponent);
    printf("Candidate : %d",candidate);
    printf("Compare : %d",compare);

    if(candidate==compare){
        printf("\n is an armstrong number !"); 
    }else{
        printf("\n isn't an armstrong number !") ; 
    }
}


int power(int number, int exponent){
    int x = number; 
    for(int i = 2; i<=exponent; i++){
        x*=number;  
    }
    return x ; 
}
