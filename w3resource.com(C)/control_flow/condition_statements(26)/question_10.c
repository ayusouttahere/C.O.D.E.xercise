// 10. Write a C program to determine eligibility for admission to a professional course based on the following criteria: Go to the editor
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
// Expected Output :
// The candidate is not eligible for admission.

#include<stdio.h>
#include<stdlib.h>

void checkEligibility(int phy, int chem, int maths); 

int main(){
    system("clear") ; 
    // initialisation 
    int phy, chem, maths ; // marks obtained in respective subjects 

    printf("Enter the marks obtained in Physics : ") ; 
    scanf("%d",&phy) ; 
    printf("Enter the marks obtained in Maths : ") ; 
    scanf("%d",&maths) ; 
    printf("Enter the marks obtained in Chemistry : ") ; 
    scanf("%d",&chem) ; 

    // calling function 
    printf("\n...checking Eligibility...\n") ;
    checkEligibility(phy,chem,maths) ; 

    return 0 ; 
}

void checkEligibility(int phy, int chem, int maths){

    if(maths >= 65){
        if(phy >= 55){
            if(chem >= 50){
                if((phy + chem + maths) >= 190){
                    if((maths + phy) >= 140){
                        printf("\nELIGIBLE FOR EXAMINATION !") ; 
                        return ; 
                    }
                    printf("Marks in MATHS+PHYSICS are less :( )"); 
                    return ;
                }
                printf("Marks in PCM are less :( "); 
                return ;
            }
            printf("Marks in CHEMISTRY are less :( "); 
            return ;
        }
        printf("Marks in PHYSICS are less :( ") ; 
        return ;
    }
    printf("Marks in MATHS are less :( ") ;
    return ; 

}