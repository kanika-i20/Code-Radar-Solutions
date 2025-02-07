#include <stdio.h>
int main(){
    // num<<shift= num* (2^shift)
    int num,shift,result;
    scanf("%d %d",&num,&shift);
    result=num<<shift;
    printf("%d",result);
    return 0;
}