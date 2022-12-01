#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, c = 30;
    int result;

    result = (a > b) && (b > c);
    printf("result = %d\n", result);

    int number = 10;
    if (number) printf("number = %d\n", number);

    scanf("%d", &number);
    if (number) printf("number = %d\n", number);
    if (number != 10) printf("number is not 10\n", number);

    int answer;
    int value1 = 1;
    int value2 = 1;

    answer = value1 == value2;
    printf("answer = %d\n", answer);

    if (value1 == value2) printf("value1 == value2\n");
    if (value1 != value2) printf("value1 != value2\n");
    if (value1 > value2) printf("value1 > value2\n");
    if (value1 < value2) printf("value1 < value2\n");
    if (value1 >= value2) printf("value1 >= value2\n");
    if (value1 <= value2) printf("value1 <= value2\n");
    if (value1 == value2 && value1 == 0) printf("value1 = value2\n");
    if (value1 == value2 || value1 == 0) printf("value1 = value2\n");

    printf("%d\n", number);
    number = 3;
    printf("%d\n", 3 % 2);
    number % 2 == 0 ? printf("number is even\n") : printf("number is odd\n");

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);

    return 0;
}
