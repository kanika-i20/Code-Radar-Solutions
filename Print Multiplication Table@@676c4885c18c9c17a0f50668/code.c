#include<stdio.h>
int main(){
    int i,n,t;
    scanf("%d",&n);
    i=1;
    while(i<=10){
        t=n*i;
        printf("%d * %d = %d\n",n,i,t);
        i++;
    }
    return 0;
}