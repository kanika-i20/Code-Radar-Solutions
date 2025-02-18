#include <stdio.h>
int main(){
    char sign;
    float a,b;
    scanf("%f %f %c",&a,&b,&sign);
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
        break;
    }
    return 0;
}