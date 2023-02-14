#include <stdio.h>
#include <math.h>
void square();
void circle();
void rectangle();
int main(){
    int area;
    int n;
    printf("Enter the side :");
    scanf("%d",&n);
    int r;
    printf("Enter the radius :");
    scanf("%d",&r);
    int a,b;
    printf("Enter the number :");
    scanf("%d%d",&a,&b);
    

    square(n);
    circle(r);
    rectangle(a,b);

    return 0;
} 
void square(int n){
    int area=pow(n,2);
    printf("%d\n",area);
}
void circle(int r){
    int area=3.14*(r*r);
    printf("%d\n",area);
}
void rectangle(int a,int b){
    int area=a*b;
    printf("%d\n",area);
}