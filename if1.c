#include<stdio.h>
int main()
{
    int num;
    printf("enter number",num);
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("number is even\n");
        //printf("number is odd");
    }
    return 0;
}