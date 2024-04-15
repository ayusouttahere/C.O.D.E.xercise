#include "armstrong_numbers.h" 

bool is_armstrong_number(int candidate){
    // 0-9 all numbers are armstrong hence : 
    if(candidate <= 9 && candidate >=0){
        return 1 ; 
    }
    
    //initialising and assigning a variable 
    int  exponent = 0, temp = candidate, compare=0 ; 
    // fetching power value  ; 
    while(candidate>0){
        exponent++ ; 
        candidate/=10 ; 
    }
    //resetting candidate  ;
    candidate = temp ; 
    
    //calculating the value to compare ; 
    while(candidate>0){
        compare += power(candidate%10,exponent);
        candidate/=10  ;
    }
    // resetting candidate's value ; 
    candidate = temp ; 

    //returning value to function ; 
    if(compare==candidate){
        return 1  ; 
    }else{
        return 0  ; 
    }
}
int power(int num, int pow){
    int x =  num ;
    for(int i=2 ; i<=pow; i++){
        x*=num ;  
    }
    return x ; 
}
