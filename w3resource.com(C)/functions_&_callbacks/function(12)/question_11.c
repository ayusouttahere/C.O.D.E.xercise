// 11. Write a program in C to check whether two given strings are an anagram.
// Test Data :
// Input the first String : spare
// Input the second String : pears
// Expected Output :

//  spare and pears are Anagram.  

#include<stdio.h>
#include<string.h>

isAnagram(char arr[], char arrr[]) ; 

int main(){
    char string1[] = "spare" ; 
    char string2[] = "pears" ; 

    printf("%d",isAnagram(string1,string2)) ; 
    
    return 0 ; 
}

int isAnagram(char arr[], char arrr[]) {
    // Get the lengths of the strings
    int len1 = strlen(arr);
    int len2 = strlen(arrr);

    // Return false if lengths are not equal
    if (len1 != len2) {
        return 0;
    }

    // Create an array to store character counts for the first string
    int count[256] = {0};

    // Count the frequency of each character in the first string
    for (int i = 0; i < len1; i++) {
        count[arr[i]]++;
    }

    // Decrease the count for each character in the second string
    for (int i = 0; i < len2; i++) {
        count[arrr[i]]--;
    }

    // If all counts are zero, the strings are anagrams
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}