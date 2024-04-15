// DID MY BEST BUT STILL WRONG : 
#include "isogram.h"

//defining functin to calculate the length of given array ; 
int length(const char* array){
    int l=0 ; 
    while(*array != '\0'){
        array ++ ; 
        l ++; 
    }
    return l ; 
}

bool is_isogram(const char phrase[]){
    int i, j ; 
    for(i=0; i<length(phrase); i++){
        for(j=0; j <length(phrase); j++){
            if(phrase[i] == phrase[j]){
                return 1 ;  
            }
        }
    }
    return 0 ; 
}