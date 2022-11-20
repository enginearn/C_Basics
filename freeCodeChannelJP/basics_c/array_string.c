#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int i;

    printf("sizeof(array) = %d\n", sizeof(array));
    printf("sizeof(int) = %d\n", sizeof(int));

    for (i = 0; i < sizeof(array)/sizeof(int) ; i++)
    {
        printf("%d番目: %d\n", i, array[i]);
    }

    int array2[5];
    printf("array2[0] = %d\n", array2[0]);
    printf("array2 size = %d\n", sizeof(array2));

    // need the end of char {'a', 'b', 'c', 'd', 'e', '\0'}
    char str[] = "Hello World!";
    printf("sizeof(str) = %d\n", sizeof(str));
    printf("%s\n", str);
    printf("count words: (%s) = %d\n", str, sizeof(str)/sizeof(char));

    char str2 = 'a';
    printf("sizeof(str2) = %d\n", sizeof(str2));
    printf("count words: (%c) = %d\n", str2, sizeof(str2)/sizeof(char));

    char str_int[] = "12345";
    printf("atoi(str_int) = %d\n", atoi(str_int));

    char str_float[] = "123.45";
    printf("atof(str_float) = %f\n", atof(str_float));

    // strcpy
    char str3[] = "Hello";
    char str4[] = "World";
    char str5[10];
    strcpy(str5, str3);
    strcat(str5, str4);
    printf("str5 = %s\n", str5);

    // strcat
    char str6[] = "Hello";
    char str7[] = "World";
    strcat(str7, str6);
    printf("str7 = %s\n", str7);

    // strcmp
    char str8[] = "Hello";
    char str9[] = "Hello";
    char str10[] = "World";
    printf("str8 == str9: %d\n", strcmp(str8, str9));
    printf("str8 == str10: %d\n", strcmp(str8, str10));

    // sprintf
    char str11[10];
    char star[] = "Star";
    char wars[] = "Wars ";
    char episode[] = "Episode ";
    int number = 4;
    sprintf(str11, "%s%s%s%d", star, wars, episode, number);
    printf("str11 = %s\n", str11);

    // sscanf
    char str12[] = "12345";
    int num;
    sscanf(str12, "%d", &num);
    printf("num = %d\n", num);

    //strlen
    char str13[] = "Hello World!";
    printf("strlen(str13) = %d\n", strlen(str13));

    return 0;
}
