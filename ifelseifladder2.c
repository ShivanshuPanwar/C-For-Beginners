#include<stdio.h>
void main(void)
{
    int n;
    printf("students\n\n");
    printf("1. shiv\n");
    printf("2. shiva\n");
    printf("3. shivam\n");
    printf("enter number 1 to 3:");
    scanf("%d",&n);
    if(n==1) printf("shiv");
    else if(n==2) printf("shiva");
    else if(n==3) printf("shivam");
    else printf("data not match!");
    

}