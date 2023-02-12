/*
7. Write a C program to performs mathematical operations such as addition, subtraction, multiplication, division etc on numerical values (constants and variables).

  Operator    Meaning of Operator
     +        addition or unary plus
     -        subtraction or unary minus
     *        multiplication
     /        division
     %        remainder after division (modulo division)


  Output:- if a=9 and b = 4 then
    a+b = 13
    a-b = 5
    a*b = 36
    a/b = 2
    Remainder when a divided by b=1

*/
#include <stdio.h>

int main() {
    int a = 9, b = 4;
    int sum, difference, product, quotient, remainder;

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
    remainder = a % b;

    printf("a = %d and b = %d\n", a, b);
    printf("a + b = %d\n", sum);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", product);
    printf("a / b = %d\n", quotient);
    printf("Remainder when a divided by b = %d\n", remainder);

    return 0;
}
