#include <stdio.h>
int main(){
    char sign;
    int a,b,;
    scanf("%d %d %c",&a,&b,&sign);
    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);

    }
    else if(c=='/'){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
    return 0;
}