#include <stdio.h>
int main(){
    //for ones complement ~ is used binary 000101 gives 111010
    int a,b;
    scanf("%d",a);
    b=~a;
    printf("%d",b);
    return 0;
}