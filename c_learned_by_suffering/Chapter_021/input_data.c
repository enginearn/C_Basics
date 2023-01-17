#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[100];

    printf("Enter a value: ");
    gets(str1);
    puts(str1);

    printf("Enter a value: ");
    fgets(str1, 100, stdin);
    fputs(str1, stdout);

    int value;
    printf("Enter a value: ");
    fgets(str1, sizeof(str1), stdin);
    value = atoi(str1); // atoi() converts ASCII to integer
    printf("value = %d\n", value);

    int i, j, val[10];
    char str2[100], *ch;
    fgets(str2, sizeof(str2), stdin);

    ch = strtok(str2, " "); // strtok() splits string into tokens
    for (i = 0; i < sizeof(val); i++)
    {
        if (ch == NULL)
        {
            break;
        }
        else
        {
            val[i] = atoi(ch);
        }
        ch = strtok(NULL, " ");
    }

    for (j = 0; j < i; j++)
    {
        printf("val[%d] = %d\n", j, val[j]);
    }

    return 0;
}
