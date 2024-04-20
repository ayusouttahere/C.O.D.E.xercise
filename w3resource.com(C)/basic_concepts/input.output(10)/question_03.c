// 3. Write a C program that prints the perimeter of a rectangle using its height and width as inputs.
// Expected Output :
// Input the height of the Rectangle : 5
// Input the width of the Rectangle : 7
// Perimeter of the Rectangle is : 24.000000

#include<stdio.h>

int main(){
    //initialisation 
    int perimeter ; // perimeter of rectangle 
    int height ; // height of rectangle
    int width ; // width of of rectangle 

    // user input : 
    printf("Input the height of the Rectangle : ") ; 
    scanf("%d",&height) ;
    printf("Input the width of the Rectangle : ") ; 
    scanf("%d",&width) ;

    // calculating parameter ; 
    perimeter = 2*(height + width) ; 

    // outout 
    printf("\nPerimeter of the Rectangle is : %d",perimeter) ;

    return 0 ; 
}