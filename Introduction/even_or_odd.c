#include <stdio.h>

int main(){
    int x;
    printf("enter x");
    scanf("%d",&x);

    if(x%2==0){
        printf("it is even");

    }
    else
    {
        printf("it is odd");
    }
    return 0;
}