// 10. Write a C program to find the third angle of a triangle if two angles are given.
// Expected Output :
// Input two angles of triangle separated by comma : 50,70
// Third angle of the triangle : 60


#include<stdio.h>

int main(){
    //initialisation..
    int a1,a2,a3 ; // for angle 1,2 and 3 respectively 

    //user input for two angles 
    printf("Enter two angles of triangle separated by comma : ") ;
    scanf("%d,%d",&a1, &a2) ; 

    // calculating 3rd angle 
    // as sum of interior angle of a triangle is 180 ; 
    a3 = 180 - (a1+a2) ; 

    //out put 
    printf("\nThird Angle Of The Triangle : %d ",a3) ; 
    return 0 ; 
}