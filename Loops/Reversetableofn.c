#include <stdio.h>

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=10;i>=1;i--){ 
        // int ans = n*i;
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}