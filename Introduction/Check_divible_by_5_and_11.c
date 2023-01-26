#include <stdio.h>

int main()
{
   int x;
   printf("Enter x ");
   scanf("%d",&x);

   if(x%5==0 && x%11==0){
    printf("it is divisible");
   }
   else{
    printf("not divisible");
   }
   
}