#include <stdio.h>
#include <math.h>
void square();
int main(){
    int sq;
    int n;
    printf("enter number:");
    scanf("%d",&n);

    square(n);

    return 0;
}
void square(int n){
     int sq=pow(n,2);
    printf("%d",sq);
}