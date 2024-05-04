// 5. Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
// Expected Output :

//  The sum of the series is : 34 


#include<stdio.h>

float find(int x) ;

int fact(int x) ; 

int main(){

    float sum = find(5) ; 
    printf("Sum is : %f",sum) ; 

    return 0 ; 
}

float find(int x){
    float sum = 0; 

    for(int i = 1 ; i <= x ; i++){
        sum+= fact(i)/i ;
    }

    return sum ; 

}

int fact(int x){
    //base case 
    if(x == 1){
        return 1 ; 
    }
    // function call to itself 
    int factorial = x * fact(x-1)  ;

    //returning factorial 
    return factorial ; 

}