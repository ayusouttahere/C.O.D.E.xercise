// 9. Write a program in C to check Armstrong and Perfect numbers using the function.
// Test Data :
// Input any number: 371
// Expected Output :

//  The 371 is an Armstrong number.                                                 
//  The 371 is not a Perfect number.  


#include<stdio.h>

int armstrong(int x) ; // check 
int perfect(int x) ;   //check  
int poww(int x, int power) ; // check 
int req_function(int x) ; 

int main(){
    printf("\nEnter a number to test the function : ") ; 
    int n; 
    scanf("%d",&n) ; 
    
    //function call 
    req_function(n) ; 

    return 0 ; 
}

int armstrong(int x){
    int nod = 0 ; // number of digits ;
    int temp = x; // temporary variable : 
    int sum = 0  ; // sum of all digits ; 

    // finding out if it is an armstrong number ; 
    while(temp != 0){
        nod++ ; // finding number of digits  
        temp = temp/10 ; // removing last digit 
    }
    
    temp = x; 

    while(temp != 0){
        sum = sum + poww(temp%10,nod) ;  
        temp/=10 ; 
    }

    if(x == sum){
        return 1 ; 
    }else{
        return 0 ; 
    }
}

int poww(int x, int power){
    int re = x ; //value to return ; 
    for(int i = 1 ; i < power ; i++){
        re = re*x ;   
    }
    return re ; 
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

int req_function(int x){
    if(perfect(x) && armstrong(x)){
        printf("CORRECT !") ; 
    }else{
        printf("isn't CORRECT :( ") ; 
    }
}