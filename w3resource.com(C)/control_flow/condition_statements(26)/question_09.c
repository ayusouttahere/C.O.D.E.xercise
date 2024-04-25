// 9. Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
// Test Data : 7 9
// Expected Output :
// The coordinate point (7,9) lies in the First quadrant

#include<Stdio.h>

int findQuadrant(int x, int y) ; 

int main(){

    // initialisation of variables 
    int x, y ; 
    int quadrant ; 

    // taking coordinates from user 
    printf("\nEnter x Co-ordinates : ") ;
    scanf("%d",&x) ; 
    printf("\nEnter x Co-ordinates : ") ;
    scanf("%d",&y) ;

    //function call 
    quadrant = findQuadrant(x,y) ; 
    
    printf("\nQuadrant is Equal to : %d",findQuadrant(x,y)) ; 

    return 0 ; 
}

int findQuadrant(int x, int y){
    if((x > 0) && (y > 0)){
        return 1 ; 
    }else if((x < 0) && (y > 0)){
        return 2 ; 
    }else if((x < 0) && (y < 0)){
        return 3 ; 
    }else if((x > 0) && (y<0)){
        return 4 ;
    }
}