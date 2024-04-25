// 14. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
// Test Data :
// 50 50 60
// Expected Output :
// This is an isosceles triangle.

#include<stdio.h>
#include<stdlib.h>

void typeOfTriangle(int side1, int side2, int side3);

int main(){
    system("clear") ; 

    // initialisation and input
    int s1,s2,s3 ; // all the sides 

    printf("\nEnter 1st side : "); 
    scanf("%d",&s1) ; 
    printf("\nEnter 2nd side : "); 
    scanf("%d",&s2) ; 
    printf("\nEnter 3rd side : "); 
    scanf("%d",&s3) ; 

    // function call 
    typeOfTriangle(s1,s2,s3); 

    return 0 ; 
}

void typeOfTriangle(int side1, int side2, int side3){
    if((side1 == side2) && (side2 == side3) && (side1 == side3)){
        printf("\nEquilateral Triangle!") ; 
    }else if((side1 == side2)&&(side2 != side3) &&(side1 != side3)){
        printf("\nIsosceles Triangle!") ; 
    }else if((side1 != side2) && (side2 != side3) && (side1 != side3) ){
        printf("\nScalene Triangle!") ; 
    }
}