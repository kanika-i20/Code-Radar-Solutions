#include <stdio.h>
#include<ctype.h>
int main(){
    char ch;
    vowel=aeiou;
    scanf("%c",ch);
    if(isdigit(ch)){
        printf("Digit");
    }
    else if(isalpha(ch) && ch==vowel){
        printf("Vowel");
    }
    else if(isalpha(ch) && ch!=vowel){
        printf("Consonant");
    }
    
    else{
        printf("Special Character");
    }

    return 0;
}