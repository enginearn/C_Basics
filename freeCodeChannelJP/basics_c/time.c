#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now;             // time_t型の変数nowを宣言
    struct tm *pnow;        // 構造体tm型のポインタ変数pnowを宣言
    time(&now);             // 現在時刻を取得
    now = time(NULL);       // 現在時刻を取得
    pnow = localtime(&now); // 現在時刻を構造体tm型に変換

    char buf[80]; // 文字列を格納する配列bufを宣言

    printf("現在の日時は %4d/%2d/%2d %2d:%2d:%2d です。\n",
           pnow->tm_year + 1900, // 年
           pnow->tm_mon + 1,     // 月
           pnow->tm_mday,        // 日
           pnow->tm_hour,        // 時
           pnow->tm_min,         // 分
           pnow->tm_sec          // 秒
    );

    strftime(buf, sizeof(buf), "%Y/%m/%d %H:%M:%S", pnow); // 構造体tm型の変数pnowを文字列に変換
    printf("現在の日時は %s です。\n", buf);               // 文字列を表示

    return 0;
}
