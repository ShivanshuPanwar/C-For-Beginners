// printing all odd and even numbers between 1 to 5

#include<stdio.h>
int main()
{
  int n;
  for(n=1;n<=5;n++)
  {
    if(n%2==0)
    printf("%d is even\n",n);
    else
    printf("%d is odd\n",n);
  }
  return 0;
}