#include <stdio.h>
void calc(int x, int y, int *a, int *b);

int main(void) {
    int apple = 10;
    int *pointer;
    // &appleはappleのアドレスを指す
    // int *pointerはint型のポインタ変数
    pointer = &apple;
    printf("appleの値は%dです。\n", apple);
    printf("&appleのアドレスは%pです。\n", &apple);
    printf("pointerの値(appleの先頭メモリアドレス)は%pです。\n", pointer);
    printf("*pointerが指す値は%dです。\n", *pointer);
    printf("====================================\n");

    *pointer = 20;
    printf("appleの値は%dです。\n", apple);
    printf("&appleのアドレスは%pです。\n", &apple);
    printf("pointerの値(appleの先頭メモリ番号)は%pです。\n", pointer);
    printf("*pointerが指す値は%dです。\n", *pointer);
    printf("====================================\n");

    *pointer = apple;
    printf("pの値は%pです。\n", pointer);
    printf("*pが指す値は%dです。\n", *pointer);
    printf("====================================\n");

    int result_add;
    int result_sub;
    printf("result_addのアドレスは%pです。\n", &result_add);
    printf("result_subのアドレスは%pです。\n", &result_sub);

    calc(10, 5, &result_add, &result_sub);
    printf("result_addの値は%dです。\n", result_add);
    printf("result_subの値は%dです。\n", result_sub);

    return 0;
}

void calc(int x, int y, int *a, int *b) {
    *a = x + y;
    *b = x - y;
    return *a, *b;
}
