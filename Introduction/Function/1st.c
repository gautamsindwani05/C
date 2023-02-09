#include <stdio.h>
void printNamaste();
void printBonjour();

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        printNamaste();
    }
    else if(ch=='f'){
        printBonjour();
    }
    else{
        printf("Invalid user");
    }
   
    return 0;
}
void printNamaste(){
    printf("Namaste");
}
void printBonjour(){
    printf("Bonjour");
}