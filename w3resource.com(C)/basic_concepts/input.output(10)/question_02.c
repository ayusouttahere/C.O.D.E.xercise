// 2. Write a C program that calculates the volume of a sphere.
// Expected Output :
// Input the radius of the sphere : 2.56
// The volume of sphere is 70.276237.

#include<stdio.h>

int main(){
    //initialisation 
    float radius ; //radius of sphere
    float volume ; // volume of sphere
    const float pi =  3.14159265358979323846264338327950288419716939937510 ; 

    // user input 
    printf("Enter the Radius of Sphere : ");
    scanf("%f",&radius); 

    // caluclating volume ; 
    volume = (4.0/3.0) * pi *(radius*radius*radius) ; 


    // output 
    printf("\nThe volume of Sphere is %f",volume); 
    return 0 ; 
}