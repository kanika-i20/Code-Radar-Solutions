#include <stdio.h>
#include<ctype.h>
int main(){
    char ch;
    vowel=a,e,i,o,u;
    scanf("%c",ch);
    if(isdigit(ch)){
        printf("Digit");
    }
    else if(isalpha(ch)){
        if(ch==vowel){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special Character");
    }

    return 0;
}