#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && a==c){
        printf("Equilateral");
    }
    else if((a==b && b==c && a!=c)||(a==b && a==c && b!=c)||(a==c && b==c && a!=b)){
        printf("Isoceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}