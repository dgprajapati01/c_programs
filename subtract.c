#include <stdio.h>
int main()
{
    int a, b, sub;
    printf("Enter Two Numbers: \n");
    scanf("%d",& a);
    scanf("%d",& b);

    printf("The Value Entered is :%d\n",a);
    printf("the Entered value is :%d\n",b);

    sub=a-b;
    
    printf("The Value Of Two Numbers Is: %d",sub);
    return 0;
}