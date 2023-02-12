//6. Write a C program to swap two numbers using bitwise operator.

#include<stdio.h>
int main()
{
    int a,b,tem;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    tem=a+b;
    a=tem ^ a;
    b=tem^b;

    printf(" After swaping numbers are %d %d ",a,b);
    return 0;


}
