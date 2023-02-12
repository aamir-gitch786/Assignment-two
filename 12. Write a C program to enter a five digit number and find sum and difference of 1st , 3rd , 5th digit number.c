//12. Write a C program to enter a five digit number and find sum and difference of 1st , 3rd , 5th digit number.
#include <stdio.h>

int main() {
    int number;
    int a_1st, b_3rd, c_5th;
    int sum, difference;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    a_1st = number / 10000;
    b_3rd = (number / 100) % 10;
    c_5th = number % 10;

    sum = a_1st + b_3rd + c_5th;
    difference = a_1st - b_3rd - c_5th;

    printf("The sum of 1st , 3rd and 5th of %d is: %d\n", number, sum);
    printf("The difference of 1st, 3rd and 5th of %d is: %d\n", number, difference);

    return 0;
}

