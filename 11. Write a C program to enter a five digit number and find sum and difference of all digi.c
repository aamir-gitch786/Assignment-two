
//11. Write a C program to enter a five digit number and find sum and difference of all digit.
#include <stdio.h>

int main() {
    int number;
    int a, b, c, d, e;
    int sum, difference;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    a = number / 10000;
    b = (number / 1000) % 10;
    c = (number / 100) % 10;
    d = (number / 10) % 10;
    e = number % 10;

    sum = a + b + c + d + e;
    difference = a - b - c - d - e;

    printf("The sum of the digits of %d is: %d\n", number, sum);
    printf("The difference of the digits of %d is: %d\n", number, difference);

    return 0;
}
