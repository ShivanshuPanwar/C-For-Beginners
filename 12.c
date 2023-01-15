#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    if(marks>600)
    {
        if(marks>600)
        printf("Pass with 1st divison");
        else
        printf("Pass");
    }
    else
    {
        if(marks<240)
        printf("Fail");
        else
        printf("Pass with average marks");
    }
    return 0;
}