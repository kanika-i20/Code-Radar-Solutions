#include <stdio.h>
int main(){
    char sign;
    int a,b;
    scanf("%d %d %c",&a,&b,&sign);
    switch(sign){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("error");
    }
    return 0;
}