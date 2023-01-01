#include <stdio.h>

void func(int *pvalue);
int getaverage(int data[10]);
void maxmin(int data[], int *max, int *min);

int main(void)
{
    int a1 = 10;
    printf("Address of a1 = %p\n", &a1);

    int i1, i2, i3;
    printf("Address of i1 = %p\n", &i1);
    printf("Address of i2 = %p\n", &i2);
    printf("Address of i3 = %p\n", &i3);

    int a2 = 10;
    int *p2 = &a2;

    printf("memory address of a: %p\n", a2);
    printf("memory address of &a: %p\n", &a2);
    printf("value of a2 = %d\n", a2);
    printf("memory address of p2: %p\n", p2);
    printf("memory address of &p2: %p\n", &p2);
    printf("value of p2 means memory address = %p\n", p2);
    printf("value of *p2 = %d\nit means value a2\n", *p2);

    int array1[10];
    printf("array1 = %p\n", array1);
    printf("array1[0] = %p\n", &array1[0]);
    printf("array1[1] = %p\n", &array1[1]);
    printf("array1[2] = %p\n", &array1[2]);

    char str1[256];
    printf("Enter a word: ");
    scanf("%s", &str1[0]); // str1 is the same as &str1[0]
    printf("What you enterd:  %s\n", str1);

    char str2[256] = "DRAGON";
    printf("Enter the last 4 letters of the word: ");
    scanf("%s", &str2[6]);
    printf("Complete words = %s\n", str2);

    // pointer arithmetic
    // pointer has 2 types: pointer variable mode which is no * with the name
    // and basic variable mode which has * before the name.
    // &i means the memory address of i
    int *p4, i4;
    p4 = &i4;
    printf("p4 = %p\n", p4);
    // pointer + 1 means pointer + sizeof(type)
    printf("p4 + 1 = %p\n", p4 + 1);
    printf("&i4 = %p\n", &i4);

    // the basic variable mode of pointer can be used as a variable
    *p4 = 10;
    printf("*p4 = %d\n", *p4);
    printf("i4 = %d\n", i4);

    int value1 = 10;
    printf("&value1 = %p\n", &value1);
    func(&value1); // pass the memory address of value to func
    printf("value1 = %d\n", value1);

    int average1, data0[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    average1 = getaverage(data0);
    printf("average = %d\n", average1);

    int *data1;
    int average2 = 0;
    int data2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    data1 = &data2;
    for (int i = 0; i < 10; i++)
    {
        average2 += *(data1 + i); // data1[i] is the same as *(data1 + i)
    }
    printf("average2 = %d\n", average2 / 10);

    int integer = 0, data[10], max, min;
    do {
        printf("%d 番目の数: ",integer + 1);
        scanf("%d", &data[integer]);
        integer++;
    } while (data[integer - 1] != 0 && integer < 10);

    maxmin(data, &max, &min);
    printf("最大値: %d\n 最小値 %d\n", max, min);

    return 0;
} // the end of main

void func(int *pvalue)
{
    printf("pvalue = %p\n", pvalue);
    *pvalue = 1000;
    return;
}

int getaverage(int data[10])
{
    int i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        sum += data[i]; // data[i] is the same as *(data + i)
    }
    return sum / 10;
}

void maxmin(int data[], int *max, int *min)
{
    int i;
    *max = 0;
    *min = 100;

    while (data[i] != 1) {
        if (data[i] > *max) *max = data[i];
        if (data[i] < *min) *min = data[i];
        i++;
    }
}
