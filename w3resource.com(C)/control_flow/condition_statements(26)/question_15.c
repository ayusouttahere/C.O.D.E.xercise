// 15. Write a C program to check whether a triangle can be formed with the given values for the angles.
// Test Data :
// 40 55 65
// Expected Output :
// The triangle is not valid.

#include<stdio.h>
#include<stdlib.h>

void check4triangle(ang1, ang2, ang3) ; 

int main(){
    system("clear") ; 
    // user input for 3 angles of triangles
    int ang1, ang2, ang3 ; 
    printf("Enter Angle 1 : ") ; 
    scanf("%d",&ang1) ; 
    printf("Enter Angle 2 : ") ; 
    scanf("%d",&ang2) ; 
    printf("Enter Angle 3 : ") ; 
    scanf("%d",&ang3) ; 

    check4triangle(ang1,ang2,ang3) ; 
    
    return 0 ; 
}

void check4triangle(ang1, ang2, ang3){
    if((ang1+ang2+ang3)>180){
        printf("\nTriangle isn't valid"); 
    }else{
        printf("\nTriangle is valid"); 
    }
    return ; 
}