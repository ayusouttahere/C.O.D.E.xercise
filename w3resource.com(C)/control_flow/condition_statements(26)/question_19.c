// 19. Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer.

// The charge are as follow :

// Unit	Charge/unit
// upto 199	@1.20
// 200 and above but less than 400	@1.50
// 400 and above but less than 600	@1.80
// 600 and above	@2.00

// If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

// Test Data :
// 1001
// James
// 800

// Expected Output :
// Customer IDNO :1001
// Customer Name :James
// unit Consumed :800
// Amount Charges @Rs. 2.00 per unit : 1600.00
// Surchage Amount : 240.00
// Net Amount Paid By the Customer : 1840.00

#include<stdio.h>
#include<stdlib.h>

float calcCharge(int unit) ; // function to calculate charge as per unit . 
float calcAmount(int unit, float charge) ; // calculate amount of bill  
float calcSurCharge(float amount); // calculate surcharge
float net(float amount, float SurCharge) ; // calculating net amount 

int main(){
    system("clear")  ;

    // inti... variables 
    int id, unit ; // cutomer id and unit consumed; 
    char name[20] ; // customer's name ; 
    float charge ; // charge per unit. 
    float amount ; // amount charged 
    float surcharge ; // If bill exceeds Rs. 400 then a surcharge of 15% will be charged
    float netAmount ; // net amount paid by user 

    // UI 
    printf("\t\t\t\t\t...ELECTRICITY BILL PORTAL...\n");
    
    printf("Customer ID NO : ") ; 
    scanf("%d",&id) ; 

    // clearing input buffer 
    while(getchar() != '\n') ; 

    printf("\nCustomer Name : ") ; 
    fgets(name,20,stdin) ;

    printf("\nUnit Consumed : ") ; 
    scanf("%d",&unit) ; 

    // calculating net amount with function count :3 

    charge = calcCharge(unit) ; // calculate charge per unit 
    amount = calcAmount(unit,charge) ; // calC amount : unit * charge  
    surcharge = calcSurCharge(amount) ; // calculating surcharge  
    netAmount = net(amount,surcharge) ; // calC net amount 
    
    // OUTPUT 
    printf("\nAmount Charges @Rs. %.2f per unit : %.2f",charge,amount) ; 
    printf("\n\nSurCharge Amount : %.2f",surcharge) ; 
    printf("\n\nNET AMOUNT TO BE PAID : %.2f",netAmount) ; 

    return 0 ; 
}

float calcCharge(int unit){
    float charge ; 

    if(unit < 200){
        charge = 1.20 ; 
    }else if((unit > 200) && (unit < 400)){
        charge = 1.50 ;    
    }else if((unit > 400) && (unit < 600)){
        charge = 1.80 ;         
    }else if(unit > 600){
        charge = 2.00 ; 
    }

    return charge ; 
}

float calcAmount(int unit, float charge){ // calculate amount of bill ; 
    float amount = unit*charge ; 
    return amount ; 
} 

float calcSurCharge(float amount){
    float surcharge ; 
    if(amount > 400){
        surcharge = (0.15*amount); 
    }
    return surcharge ; 
} 

float net(float amount, float surCharge){
    int reee = amount + surCharge ; ; 
    return reee ;  
}

