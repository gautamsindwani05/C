#include <stdio.h>

int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    int sum=0;
    
    for(int i=1;i<=n;i++){
        sum =sum+i;
    }
    printf("%d",sum);

    for(int i=n;i>=1;i--){
        printf("%d",i);
    }
    return 0;
}