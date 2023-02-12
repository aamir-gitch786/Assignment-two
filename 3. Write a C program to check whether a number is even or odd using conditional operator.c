//3. Write a C program to check whether a number is even or odd using conditional operator.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    n%2==0?printf("%d is a even number",n):printf("%d is a odd number",n);
    return 0;
}
