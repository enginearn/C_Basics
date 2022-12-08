#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;

    if (a > b)
    {
        printf("a is greater than b\n");
    } else if (a < b)
    {
        printf("a is less than b\n");
    } else
    {
        printf("a is equal to b\n");
    }

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible to vote\n");
    } else
    {
        printf("You are not eligible to vote\n");
    }

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    switch (number)
    {
        case 1:
            printf("You entered 1\n");
            break;
        case 2:
            printf("You entered 2\n");
            break;
        case 3:
            printf("You entered 3\n");
            break;
        default:
            printf("You entered something else\n");
    }

    printf("Enter month number: ");
    scanf("%d", &number);

    switch (number)
    {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid month number\n");
    }

    return 0;
}
