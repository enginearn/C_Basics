#include <stdio.h>
#define EXCISETAX 0.05
#define AUTHOR "enginearn"
#define PRINT_TEMP printf("現在の温度は%d度です\n", temp)
#define PRINTMSG(msg) printf("メッセージ: %s\n", msg)
#define GET_TRAPEZOID_AREA(a, b, h) ((a + b) * h / 2)

enum {
    StATE_NORMAL,
    StATE_ERROR,
    StATE_WARNING,
    StATE_FATAL,
    StATE_CRITICAL,
};

enum {
    OLYMPIC_NONE,
    OLYMPIC_SUMMER,
    OLYMPIC_WINTER,
};

int main(void)
{
    int price;
    printf("本体価格:");
    scanf("%d", &price);
    price = (int)((1 + EXCISETAX) * price); // 本体価格に消費税を加える
    printf("消費税込み価格:%d円\n", price);

    printf("作成者: %s\n", AUTHOR);
    printf("状態: %d\n", StATE_NORMAL);

    int temp = 25;
    PRINT_TEMP;

    PRINTMSG("Hello, World!");

    int a = 10, b = 20, h = 5;
    printf("台形の面積: %d\n", GET_TRAPEZOID_AREA(a, b, h));

    int year, hold;
    printf("年を入力してください:");
    scanf("%d", &year);
    printf("オリンピックの種類: %d\n", olympic(year));

    hold = olympic(year);
    switch (hold) {
    case OLYMPIC_NONE:
        printf("開かれない\n");
        break;
    case OLYMPIC_SUMMER:
        printf("夏季オリンピック\n");
        break;
    case OLYMPIC_WINTER:
        printf("冬季オリンピック\n");
        break;
    };

    return 0;
}

int olympic(int year)
{
    if (year % 2 == 0) {
        if (year % 4 == 0) {
            return OLYMPIC_SUMMER;
        } else {
            return OLYMPIC_WINTER;
        }
    } else {
        return OLYMPIC_NONE;
    }
}
