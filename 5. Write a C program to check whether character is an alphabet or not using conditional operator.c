//5. Write a C program to check whether character is an alphabet or not using conditional operator.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the charater \n");
    scanf("%c",&c);
    (c>='A' && c<='Z' || c>='a' && c<='z' )?printf("%c is a alphabet ",c):printf("%c is not a character",c);
    return 0;
}
