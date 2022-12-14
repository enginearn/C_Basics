#include <stdio.h>
#include <string.h>

int main(void)
{
    int first_array[100];

    first_array[9] = 100;
    printf("first_array[9] = %d\n", first_array[9]);
    first_array[9]++;
    printf("first_array[9] = %d\n", first_array[9]);
    first_array[99]++;
    printf("first_array[99] = %d\n", first_array[99]);

    int second_array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("sizeof second_array = %d\n", sizeof(second_array));
    printf("sizeof second_array[0] = %d\n", sizeof(second_array[0]));

    for (int i = 0; i < sizeof(second_array)/sizeof(int); i++)
    {
        printf("second_array[%d] = %d\n", i, second_array[i]);
        if (i == 10)
        {
            break;
        }
    }

    int array1[] = {42, 79, 13, 19, 41};
    int array2[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < sizeof array2 / sizeof array2[0]; i++)
    {
        printf("array1[%d] = %d, array2[%d] = %d\n", i, array1[i], i, array2[i]);
    }

    /* copy all elements of array1 to array2 */
    for (int i = 0; i < sizeof array2 / sizeof array2[0]; i++)
    {
        array2[i] = array1[i];
    }

    for (int i = 0; i < sizeof array2 / sizeof array2[0]; i++)
    {
        printf("array1[%d] = %d, array2[%d] = %d\n", i, array1[i], i, array2[i]);
    }

    memcpy(array2, array1, sizeof array1);

    for (int i = 0; i < sizeof array2 / sizeof array2[0]; i++)
    {
        printf("memcpy: array1[%d] = %d, array2[%d] = %d\n", i, array1[i], i, array2[i]);
    }

    return 0;
}
