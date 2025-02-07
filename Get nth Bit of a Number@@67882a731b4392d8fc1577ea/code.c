#include <stdio.h>
int main(){
    int number,n;
    scanf("%d %d",&number,&n);
    int nthbit = (number>>n)&1;
    printf("%d",nthbit)
    return 0;
}