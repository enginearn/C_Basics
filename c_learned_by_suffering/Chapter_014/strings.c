#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char c = 'A';
    printf("c = %c\n", c);
    printf("c = %d\n", c);

    char s[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    for (int i = 0; i < strlen(s); i++)
    {
        printf("s[%d] = %c: %d\n", i, s[i], s[i]);
    }

    char s_lower[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < strlen(s_lower); i++)
    {
        printf("s_lower[%d] = %c: %d\n", i, s_lower[i], s_lower[i]);
    }

    if (isalnum(c)) printf("%c is alphanumeric\n", c);
    if (isdigit(c)) printf("%c is a digit\n", c);
    if (isalpha(c)) printf("%c is a letter\n", c);
    if (islower(c)) printf("%c is a lowercase letter\n", c);
    if (isupper(c)) printf("%c is an uppercase letter\n", c);
    if (isblank(c)) printf("%c is a blank\n", c);
    if (isspace(c)) printf("%c is a space\n", c);
    if (ispunct(c)) printf("%c is a punctuation mark\n", c);
    if (isprint(c)) printf("%c is printable\n", c);
    if (iscntrl(c)) printf("%c is a control character\n", c);

    char str[] = "145";
    int i_str = atoi(str);
    if (isdigit(i_str))
    {
        printf("The string %s is casted(typecast) to the type number.\n", str);
    } else {
        printf("The string %s is not a number.\n", str);
    }

    char str2[10];
    strcpy(str2, "MARIO");
    printf("str2 = %s\n", str2);

    char str3[] = "MARIO", str20[10];
    strncpy(str20, str3, 3);
    str2[3] = '\0'; // null terminator
    printf("str20 = %s\n", str20);

    char str4[] = "DRAGON" "BALL";
    printf("str4 = %s\n", str4);

    char str5[] = "DRAGON";
    char str6[] = "QUEST";
    strcat(str5, str6);
    printf("str5 = %s\n", str5);

    char str7[16];
    char str8[12] = "DRAGON";
    char str9[] = "QUEST";
    int n = 3;
    sprintf(str7, "%s%s%d", str8, str9, n);
    printf("str7 = %s\n", str7);

    char str10[32];
    printf("Enter a string: ");
    scanf("%s", str10);
    printf("str10 = %s\n", str10);

    char str11[32];
    fgets(str11, 32, stdin);
    printf("str11 = %s\n", str11);

    char str12[32];
    printf("Enter a string: ");
    scanf("%[A-Z]", str12);
    printf("str12 = %s\n", str12);

    char str13[256];
    scanf("%s", str13);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str13[i] = toupper(str13[i]);
    }
    printf("str13 = %s\n", str13);

    char str14[256];

    printf("Enter a string: ");
    scanf("%s", str14);
    for (int i ; str14[i] != '\0'; i++) printf("%d\n", i);
    int i = strlen(str14);
    printf("i = %d\n", i);

    int len, counter_i;
    char str15[256], str21[] = "Sword Art Online";

    printf("Enter a string:");
    scanf("%s", str15);

    len = strlen(str21);

    for (counter_i = 0; counter_i < len; counter_i++)
    {
        if (str15[counter_i] != str21[counter_i])
        {
            printf("The strings are not equal.\n");
            break;
        }
        else {
            printf("The strings are equal.\n");
            break;
        }
    }

    char str100[256], str101[] = "Sword Art Online";
    printf("Enter a string: ");
    scanf("%s", str100);
    printf("str100 = %s\n", str100);
    printf("str101 = %s\n", str101);

    if (strcmp(str100, str101) == 0)
    {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    for (char C = 'A'; C <= 'Z'; C++)
    {
        printf("%c", C);
    }
    printf("\n");

    return 0;
}
