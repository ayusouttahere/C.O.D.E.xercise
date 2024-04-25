// 20. Write a program in C to accept a grade and declare the equivalent description :

// Grade	Description
// E	Excellent
// V	Very Good
// G	Good
// A	Average
// F	Fail
// Test Data :
// Input the grade :A
// Expected Output :
// You have chosen : Average

#include<stdio.h>
#include<stdio.h>

void description(char grade) ; 

int main(){
    system("clear") ; 

    // initialisation and user input 
    char grade ;
    
    printf("\nEnter a Grade : ") ; 
    grade = getchar() ; 

    //function call 
    printf("\nYOU HAVE CHOSEN : ") ;
    description(grade) ;  



    return 0 ; 
}

void description(char grade){
    switch(grade){
        case 'E' : printf("\nExcellent !") ; 
        break ; 
        case 'V' : printf("\nVery Good !") ; 
        break ; 
        case 'G' : printf("\nGood !") ; 
        break ; 
        case 'A' : printf("\nAverage !") ; 
        break ; 
        case 'F' : printf("\nFAIL :( !") ; 
        break ; 
    }
}