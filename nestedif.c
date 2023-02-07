#include<stdio.h>
int main()
{
    int a;
    printf("number is");
    scanf("%d",&a);

    if(a>0)
    {
        if(a%2==0)
        printf("a is even");
        else
        printf("a is odd");
    }
    else{
        if("a<0")
        printf("a is negative");
        else
        printf("a is positive");
    }
    return 0;
}