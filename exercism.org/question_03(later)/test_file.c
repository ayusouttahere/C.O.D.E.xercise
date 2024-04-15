#include<stdio.h>
#include<stdbool.h>

bool isogram(char phrase[]); 
char lowercase(char c ); 

int main(){
    char slime[] = "yungcarti" ; 
    if(isogram(slime)){
        printf("is isogram ! ");
    }else{
        printf("isn't an isogram"); 
    }

    return 0 ; 
}

bool isogram(char array[]){
    int alphabet[26] = {0} ; 

    for(int i=0; array[i]!='\0'; i++){
        char c = lowercase(array[i]);  
        if(c=='a'&& c<='z'){
            if(alphabet[c-'a' == 1]){
                return false ; 
            }else{
                alphabet[c-'a'] = 1 ; 
            }
        }
    }
    return true  ;
}

char lowercase(char c ){
    c+=32 ; 
    return c; 
}