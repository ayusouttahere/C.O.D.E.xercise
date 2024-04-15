#include "isogram.h"

bool is_isogram(const char phrase[]){
    int alphabet[26]={0}; 

    for(int i = 0 ; phrase[i] != '\0' ; i++){
        char c = lower_case(phrase[i]); 
        if(c>='a' && c<='z'){
            if(alphabet[c-'a']==1){
                return false ; 
            }else{
                alphabet[c-'a'] = 1; 
            }
        }
    }
    return true ; 
}

char lower_case(char c){
    c+=32 ; 
    return c ;
} 