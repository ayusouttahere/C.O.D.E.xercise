// 19. Write a program in C to display the n terms of a harmonic series and their sum.
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
// Test Data :
// Input the number of terms : 5
// Expected Output :
// 1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
// Sum of Series upto 5 terms : 2.283334

#include<stdio.h>

int main(){
    float sum = 0 ; 
    int n  ; //n terms of harmonic series 
    int d = 2 ; // denominator
    float t = 1 ; // for term ; 

    // user input for n ; 
    printf("Enter number of terms : ") ;
    scanf("%d",&n) ; 

    //finding sum ;
    printf("terms is : ") ;  
    for(int i = 1; i <= n ; i++){
        sum += t ;
        printf("1/%d + ",d) ; 
        t = 1.0/d ;
        d++ ;  
    } 
    printf("\nSUM is : %f",sum) ; 
    return 0 ; 
}