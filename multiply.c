#include<stdio.h>

int main()
{
    int a, b, multiply;

    printf("Enter Two Values For Multiplication");

    scanf("%d",&a);
    scanf("%d",&b);

    printf("The Entered Value Of A Is :%d\n",a);
    printf("The Entered Value Of B IS :%d\n",b);

    multiply=a*b;

    printf("The Multiplication is : %d\n",multiply);

    return 0;
}