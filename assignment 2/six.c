#include<stdio.h>
int main(){
    char character;
    printf("Enter the character:");
    scanf("%c",&character);
    printf("ASCII code for the character %c is %d",character,character);
    return 0;
}