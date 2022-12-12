#include <stdio.h>

int main(void)
{
    double money = 1;
    int month = 1;

    while (money < 1000000)
    {
        printf("%02d月目: %7.0f円\n", month, money);
        money *= 2;
        month++;
    }
    printf("%02d月目で%7.0f円となり、100万円を超える\n", month, money);

    int r;
    double s;
    do
    {
        printf("正の実数を入力してください: ");
        scanf("%d", &r);
    } while (r <= 0);
    s = r * r * 3.14;
    printf("円の面積は%.2lfです\n", s);

    int score;
    do
    {
        if (score < 0 || score > 100)
            printf("0～100の範囲で入力してください");
        printf("点数を入力してください: ");
        scanf("%d", &score);
    } while (score < 0 || score > 100);
    return 0;
}
