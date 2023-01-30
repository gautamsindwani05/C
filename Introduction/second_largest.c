#include <stdio.h>

int main(){
    int x;
    int y;
    int z;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);

    printf("Enter z : ");
    scanf("%d",&z);

    if((x>=y && x<=z) ||(x>=z && x<=y)){
        printf("x is second largest no.");
    }
    else if((y>=x && y<=z) ||(y>=z && y<=x)){
        printf("y is second largest no.");
    }
    else if((z>=x && z<=y) ||(z>=y && z<=x)){
        printf("z is second largest no.");
    }
    
    return 0;
}