#include<stdio.h>
int main(){
    int no;
    printf("Enter the number");
    scanf("%d",&no);
    printf("Unit digit of the number is %d",no%10);
    return 0;
}