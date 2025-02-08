#include <stdio.h>
#include<ctype.h>//for is upper and islower
int main(){
    char ch;
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("Uppercase");
    }
    else
    if(islower(ch)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}