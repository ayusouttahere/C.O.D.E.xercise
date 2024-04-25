// 5. Write a C program that generates a random number between 1 and 20 and asks the user to guess it. Use a while loop to give the user multiple chances until they guess the correct number.

#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
    //seeding random function 
    srand(time(NULL));
    
    //initialising random number ;
    int rand_no = rand() ; 
    printf("rand : %d\n",rand_no) ; // comment this !!!

    // guessing that number
    int ui=0 ; //userinput ;
    
    while(ui != rand_no){
        // taking a user input for comparison
        printf("Guess That Number : ") ;
        scanf("%d",&ui) ;
        // modification to guess that number correct
        if(ui > rand_no){
            printf("\nthat number is smaller."); 
        }else{
            printf("\nthat number is biggger.");
        }

    }

}