//2. Write a C program to find maximum between three numbers using conditional operator.

#include<stdio.h>
int main()
{
    int a,b,c,result;
    printf("Enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    result = a>b? a>c? a:c :b>c?b:c;  // binaryCondition ? valueReturnedIfTrue : valueReturnedIfFalse;
    printf("%d ",result);
    return 0;
}
