#include<stdio.h>
int main(){
    int i,n,t;
    scanf("%d",&n);
    i=1;
    while(i<=10){
        t=n*i;
        i++;
    }
    printf("%d",n * i = t);
    return 0;
}