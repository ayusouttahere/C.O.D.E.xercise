#include<stdio.h>

int main(){
    
    int num ; 
    //user input for num 
    printf("\nEnter a Number :") ; 
    scanf("%d",&num) ; 


    return 0 ;
}


/// // / / / //  // / / / / // / // / / /  / / / // / /  //  // 

int isPrime(int x) ; 

int main(){
    int limit ; //specified limit ; 
    int num = 2 ; 
    int sum = 0  ; 

    // user input 
    printf("\nEnter a Specified Limits : ") ;
    scanf("%d",&limit) ; 

    do{
        if(isPrime(num)){
            sum+=num ; 
        }
        num ++ ; 
    }while(num < limit) ; 

    return 0 ; 
}

int isPrime(int x){
    if(x < 2){
        return 0 ;
    }
    for(int i = 0 ; i*i <= x ; i++){
        if( (x % i) == 0 ){
            return 0 ; 
        }
    }\

    return 1 ; 
    
}