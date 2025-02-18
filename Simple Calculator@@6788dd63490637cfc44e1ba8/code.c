#include <stdio.h>
int main(){
    char sign;
    float a,b;
    scanf("%f %f %c",&a,&b,&sign);
    switch(sign){
        case '+':
        printf("%f",a+b);
        break;
        case '-':
        printf("%f",a-b);
        break;
        case '*':
        printf("%f",a*b);
        break;
        case '/':
        printf("%f",a/b);
        break;
        default:
        printf("error");
        break;
    }
    return 0;
}