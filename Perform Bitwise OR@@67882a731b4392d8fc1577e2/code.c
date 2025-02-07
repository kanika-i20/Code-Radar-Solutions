#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    //bitwise or firstly convert number into binary num and operator for bitwise |
    c=a|b;
    printf("%d",c);
    return 0;
}