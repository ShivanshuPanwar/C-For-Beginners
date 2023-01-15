#include<stdio.h>
int main()
{
    int num;
    printf("enter num");
    scanf("%d",&num);
    if(num>0)
    {
        if(num%2==0)
        printf("number is even");
        else
        printf("number is odd");
    }
    else
    {
        if(num<0)
        printf("number is negative");
        else
        printf("number is zero");
    }
    return 0;
}