// 58. Write a C program that accepts 4 real numbers from the keyboard and prints out the difference between the maximum and minimum values of these four numbers.
// Input four numbers: 1.54 1.236 1.3625 1.002
// Difference is 0.5380

#include<stdio.h>


int main(){
    float nums[4] ; 

    for(int i = 0 ; i < 4 ; i++){
        printf("input inegers : ");
        scanf("%f",&nums[i]) ; 
    }

    float min = nums[0], max = nums[0] ; 

    for(int i = 0 ; i < 4; i++){
        if(nums[i] > max){
            max = nums[i] ; 
        }
        if(nums[i] < min){
            min = nums[i] ; 
        }
    }

    printf("Diffrence is : %f",max-min); 

    return 0 ; 
}