#include <stdio.h>
int sum(int a ,int b);
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int s=sum(a,b);
    printf("%d",s);
    return 0;
}
int sum(int a ,int b){
    return a+b;
}