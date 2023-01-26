#include <stdio.h>

int main(){
    char ch;
    printf("enter a character : ");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("it is a character");
    }
    else{
        printf("not a character");
    }
    return 0;
}