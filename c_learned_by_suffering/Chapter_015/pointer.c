#include <stdio.h>

void func(int *pvalue);
int getaverage(int data[10]);
void maxmin(int data[], int *max, int *min);

int main(void)
{
    int a = 10;
    int *p = &a;

    printf("memory address of a: %p\n", a);
    printf("memory address of &a: %p\n", &a);
    printf("value of a = %d\n", a);
    printf("memory address of p: %p\n", p);
    printf("memory address of &p: %p\n", &p);
    printf("value of p means memory address = %p\n", p);
    printf("value of *p = %d\n", *p);

    int array[10];
    printf("array = %p\n", array);
    printf("array[0] = %p\n", &array[0]);
    printf("array[1] = %p\n", &array[1]);
    printf("array[2] = %p\n", &array[2]);

    char str[256];
    scanf("%s", &str[0]);
    printf("str = %s\n", str);

    char str2[256] = "DRAGON";
    scanf("%s", &str2[6]);
    printf("str = %s\n", str2);

    // pointer arithmetic
    // pointer has 2 types: pointer variable mode which is no * with the name
    // and basic variable mode which has * before the name.
    // &i means the memory address of i
    int *point, i;
    point = &i;
    printf("point = %p\n", point);
    // pointer + 1 means pointer + sizeof(type)
    printf("point + 1 = %p\n", point + 1);
    printf("&i = %p\n", &i);

    // the basic variable mode of pointer can be used as a variable
    *point = 10;
    printf("*point = %d\n", *point);
    printf("i = %d\n", i);

    int value = 10;
    printf("&value = %p\n", &value);
    func(&value); // pass the memory address of value to func
    printf("value = %d\n", value);

    int average, data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    average = getaverage(data);
    printf("average = %d\n", average);

    int *data1;
    int average2 = 0;
    int data2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    data1 = &data2;
    for (i = 0; i < 10; i++)
    {
        average2 += *(data1 + i); // data1[i] is the same as *(data1 + i)
    }
    printf("average2 = %d\n", average2 / 10);

    int integer = 0, data[10], max,min;
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
