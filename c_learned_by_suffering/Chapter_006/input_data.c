#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int int_data;
    scanf("%d", &int_data);
    printf("data = %d\n", int_data);

    double f_data;
    scanf("%lf", &f_data);
    printf("data = %f\n", f_data);

    int data1, data2;
    scanf("%d %d", &data1, &data2);
    printf("data1 = %d, data2 = %d\n", data1, data2);

    int min, max,sum;
    printf("input min and max:");
    scanf("%d %d", &min, &max);
    sum = (min + max) * (max - min + 1) / 2;
    printf("%d ~ %dの合計は%d\n", min, max, sum);

    int price;
    printf("定価を入力してください: ");
    scanf("%d", &price);
    printf("割引後の価格は%d円です\n", (int)(price * (1 - 0.1)));
    printf("割引後の価格は%d円です\n", (int)(price * (1 - 0.2)));
    printf("割引後の価格は%d円です\n", (int)(price * (1 - 0.3)));

    char str[100] = "Hello";
    printf("入力された文字数は%dです", strlen(str));

    return 0;
}
