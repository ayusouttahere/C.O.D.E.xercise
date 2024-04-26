// 11. Write a C program that calculates the compound interest for a given principal amount, interest rate, and time period. Use a do-while loop to allow the user to input values multiple times.

#include<stdio.h>

int main(){

    double principle, rate, time, ci ; 
    int flag ; 

    do{
        printf("\nEnter Principle : ") ;
        scanf("%d",&principle) ; 

        printf("\nEnter Rate : ") ; 
        scanf("%d",&rate) ;

        printf("\nEnter Time : ") ;
        scanf("%d",&time) ;  

        if (principle <= 0 || rate < 0 || time <= 0) {
            printf("Please input valid positive values for principal, interest rate, and time.\n");
            continue;  // Restart the loop for new input
        }

        rate /= 100 ; 

        // Calculate compound interest
        ci = principle * pow(1 + rate, time) - principle ;

        // Print the calculated compound interest
        printf("Compound Interest: %.2lf\n", ci);

        // Ask the user if they want to calculate again
        printf("Want to calculate compound interest again? (1 for Yes, 0 for No): ");
        scanf("%d", &flag);

    }while(flag == 1) ; 

    return 0 ; 
}