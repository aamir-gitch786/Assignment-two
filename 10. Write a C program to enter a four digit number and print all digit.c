//10. Write a C program to enter a four digit number and print all digit.
#include <stdio.h>

int main() {
    int number;

    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    printf("The digits of %d are: %d %d %d %d\n", number,
           number/1000,(number/100)%10,(number/10)%10,number%10);
    return 0;
}

