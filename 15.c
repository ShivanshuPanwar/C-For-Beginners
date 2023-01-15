#include<stdio.h>
int main()
{
    char gender;
    printf("Enter gender:(M/F)");
    scanf("%c",&gender);
    switch(gender)
    {
        case 'M':
        printf("Male");
        break;
        case 'F':
        printf("Female");
        break;
        default :
        printf("Wrong");
    }

}