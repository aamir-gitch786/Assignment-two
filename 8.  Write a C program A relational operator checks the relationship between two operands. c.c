/*8.  Write a C program A relational operator checks the relationship between two operands.
If the relation is true, it returns 1; if the relation is false, it returns value 0.
Operator    Meaning of Operator    Example
==    Equal to                  5 == 3 is evaluated to 0
>    Greater than                  5 > 3 is evaluated to 1
<    Less than                  5 < 3 is evaluated to 0
!=    Not equal to                  5 != 3 is evaluated to 1
>=    Greater than or equal to      5 >= 3 is evaluated to 1
<=    Less than or equal to           5 <= 3 is evaluated to 0
*/
#include <stdio.h>

int main() {
    int a = 5, b = 3;
    int result;

    result = (a == b);
    printf("%d == %d is evaluated to %d\n", a, b, result);

    result = (a > b);
    printf("%d > %d is evaluated to %d\n", a, b, result);

    result = (a < b);
    printf("%d < %d is evaluated to %d\n", a, b, result);

    result = (a != b);
    printf("%d != %d is evaluated to %d\n", a, b, result);

    result = (a >= b);
    printf("%d >= %d is evaluated to %d\n", a, b, result);

    result = (a <= b);
    printf("%d <= %d is evaluated to %d\n", a, b, result);

    return 0;
}
//Relational operators gives either 1 or 0.
