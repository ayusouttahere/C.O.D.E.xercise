// 2. Write a C program that takes a string and two integers (n1, n2). Now reverse the sequence of characters in the string between n1 and n2.
// Sample Date:
// ("abcdxyabcd", 5, 6) -> "abcdyxabcd"
// ("Exercises", 1, 3) -> "exercises"

#include<stdio.h>

int main(){
    // initialising variables 
    int n1, n2 ; 
    char string[20] ;

    //taking inputs : 
    printf("Input for n1 : ");
    scanf("%d",&n1); 

    printf("Input for n2 : ") ; 
    scanf("%d",&n2); 

    // Clearing input buffer
    while (getchar() != '\n'); //When you use scanf() to read an integer and then use fgets() to read a string, there's an issue with newline characters being left in the input buffer, which causes fgets() to return immediately without waiting for further input. To fix this issue, you need to clear the input buffer after using scanf() before calling fgets().

    printf("Enter a String : ");
    fgets(string,20,stdin); 

    for (int i = 0 ; i < 20 ; i++){
        printf("%c - %d \t ",string[i],i); 
    }

    // reversing the sequence of character in given string
    char temp = string[n1-1] ; 
    string[n1-1] = string[n2-1] ;
    string[n2-1] = temp ; 

    //printing output
    printf("\n New string is : %s",string) ; 




    return  0; 
}