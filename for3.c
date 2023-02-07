// sum the squares of all the numbers between 1 to 5

#include<stdio.h>
int main()
{
    int n,sum=0;
    for(n=1;n<=5;n++)
    {
        sum=sum + n*n;
    }
    printf("sum of the squares of all the numbers between 1 to 5 is =%d",sum);
}