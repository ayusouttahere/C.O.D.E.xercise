// 64. Write a C program that accepts integers from the user until a zero or a negative number, displays the number of positive values, the minimum value, the maximum value, and the average value.
// Input a positive integer:
// Input next positive integer: 15
// Input next positive integer: 25
// Input next positive integer: 37
// Input next positive integer: 43
// Number of positive values entered is 4
// Maximum value entered is 43
// Minimum value entered is 15
// Average value is 30.0000

#include<stdio.h>

int main(){
    int num ; 
    int count=0, min = 0, max = 0, sum = 0   ;  
    while(num > 0){
        printf("\n input an integet : ") ; 
        scanf("%d",&num) ; 

        if(num <= 0 ){
            break ; 
        }

        //setting min ;
        if(min == 0){
            min = num ; 
        } 
        if(num < min){
            min = num ;
        }

        //setting max ; 
        if(num > max){
            max = num ; 
        }

        //setting count ; 
        count++  ; 

        // finding values for average 
        sum += num ; 

    }

    //finding average ; 
    int avg = sum/count ; 

    printf("\n number of positive values : %d",count) ; 
    printf("\n minimum value is : %d",min) ; 
    printf("\n max integer is : %d",max); 
    printf("\n average is : %d",avg); 


    return 0 ; 
}