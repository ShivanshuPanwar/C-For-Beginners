#include<stdio.h>
void main()
{
int x;
for(x = 1; x < 10; x++)
{
if (x % 2)
continue; 
printf ("%d\t", x);
}
}