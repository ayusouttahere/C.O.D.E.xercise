// 17. Write a C program to check whether an alphabet is a vowel or a consonant.
// Test Data :
// k
// Expected Output :
// The alphabet is a consonant.

#include<stdio.h>
#include<stdlib.h>

ifVowel(char charr); 

int main(){
    system("clear") ; 

    ifVowel('i') ; 


    return 0 ; 
}

ifVowel(char charr){
    if((charr == 97)||(charr == 101)||(charr == 105)||(charr == 111)||(charr == 117)){
        printf("\nVowel/") ;
    }else{
        printf("\nConsonent.") ; 
    }
}