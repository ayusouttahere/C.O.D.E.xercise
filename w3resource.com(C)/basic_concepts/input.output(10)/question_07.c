// 7. Write a program in C that reads a forename, surname and year of birth and displays the names and the year one after another sequentially.
// Expected Output :
// Input your firstname: Tom
// Input your lastname: Davis
// Input your year of birth: 1982
// Tom Davis 1982

#include<stdio.h>

int main(){
    // initialisation 
    char forName[20] ; // String 'Name' 
    char surName[20] ; // String 4 'SurName' 
    int yearOfBbirth ; 

    //user input 
    printf("Input Your First Name : ") ; 
    scanf("%s",forName) ;

    printf("Input Your Last Name : ") ; 
    scanf("%s",surName) ;

    printf("INput your Year of Birth : ");
    scanf("%d",&yearOfBbirth) ; 

    //out put 
    printf("\n %s\t%s\t%d\t",forName, surName, yearOfBbirth) ; 


    return 0 ;      
}