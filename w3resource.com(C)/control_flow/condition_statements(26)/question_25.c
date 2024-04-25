// 25. Write a C program which computes the area of various geometrical shapes using a menu-driven approach.
// Test Data :
// 1
// 5
// Expected Output :
// The area is : 78.500000

#include<stdio.h>
#include<stdlib.h>

void areaof(); 
void areaOfRectangle()  ; 
void areaOfSquare() ; 
void areaOfTriangle() ;


int main(){
    
    areaof() ;

    return 0 ; 
}

void areaof(){
    // initialising variable to pass 
    int shape_num ; // user input to compare and call different functions 

    // user input 
    system("clear") ;     
    printf("\nSELECT THE SHAPE : " ) ; 
    printf("\n '1' for RECTANGLE.\n '2' for SQUARE.\n '3' for TRIANGLE.\n\n\n") ;
    printf("INPUT : ")  ;
    scanf("%d",&shape_num) ;

    // switch case to get area : 
    switch(shape_num){
        case 1 : areaOfRectangle()  ; 
        break ;
        case 2 : areaOfSquare() ; 
        break ; 
        case 3 : areaOfTriangle() ; 
    }

}

void areaOfRectangle(){
    int length, breadth ; 
    printf("\nEnter length : ") ; 
    scanf("%d",&length) ; 
    printf("\nEnter Breadth : ") ; 
    scanf("%d",&breadth) ;

    printf("\nArea of Rectangle is : %d",length*breadth) ;  

}

void areaOfSquare(){
    int side ; 
    printf("\nEnter Side : ") ;
    scanf("%d",&side) ; 
    printf("\nArea of Square is : %d", side*side) ; 
}

void areaOfTriangle(){
    int length, width ; 
   
    printf("\nEnter length : ") ; 
    scanf("%d",&length) ; 
    printf("\nEnter Width : ") ; 
    scanf("%d",&width) ;

    printf("\nArea of Triangle is : %d",0.5*length*width) ;  
}