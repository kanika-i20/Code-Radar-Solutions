#include<stdio.h>
int main(){
    int i,t,n;
    scanf("%d",&n);
    i=1;
    t=0;
    while(i<=n){
        t=t+i;
        i++;
        printf("%d",t);
    }
    return 0;
}