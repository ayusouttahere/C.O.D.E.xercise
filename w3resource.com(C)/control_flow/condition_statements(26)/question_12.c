// 12. Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division.
// Test Data :
// Input the Roll Number of the student :784
// Input the Name of the Student :James
// Input the marks of Physics, Chemistry and Computer Application : 70 80 90
// Expected Output :
// Roll No : 784
// Name of Student : James
// Marks in Physics : 70
// Marks in Chemistry : 80
// Marks in Computer Application : 90
// Total Marks = 240
// Percentage = 80.00
// Division = First

#include<stdio.h>
#include<stdlib.h>
#include<string.h> 


int total(int sub1, int sub2, int sub3) ; 
int percentage(int total, int total_no_of_subjects);


int main(){
    system("clear") ; 
    // initialisation 
    int rollNo, phy, chem, ca ; 
    char name[20]  ;

    // user input for..
    printf("Input Roll No. : ") ; 
    scanf("%d",&rollNo) ; 
    
    //clearing input buffer : 
    while(getchar()!='\n') ; 

    printf("Enter Name of Student : ") ; 
    fgets(name,20,stdin); 

    printf("Enter Marks of Physics, Chemistry and Computer Application (separated by comma respectively) : ") ;
    scanf("%d,%d,%d",&phy, &chem, &ca) ; 

    // out put ;
    printf("\nStudent Name is : %s",name) ; 
    printf("\nRoll No. is : %d",rollNo) ;
    printf("\nMarks in Physics : %d",phy); 
    printf("\nMarks in Chemistry : %d",chem); 
    printf("\nMarks in Computer Application : %d",ca); 
    printf("\nTotal Marks : %d",total(phy,chem,ca)) ; 
    printf("\nPercentage is : %d%%",percentage(total(phy,chem,ca),3)) ; 
    return 0 ; 
}

int total(int sub1, int sub2, int sub3){
    return sub1+sub2+sub3 ; 
}

int percentage(int total, int total_no_of_subjects){
    return total/total_no_of_subjects ; 
}
