#include <stdio.h>

int main(void) {
    int i = 0;
    while (i < 10) {
        printf("i: %d\n", i);
        i++;
    }

    int j = 0;
    do {
        printf("j: %d\n", j);
        j++;
    } while (j < 10);

    for (int k = 0; k < 10; k++) {
        printf("k: %d\n", k);
    }

    int year = 2022;
    int count_year = year;
    double money = 1000000;

    while (money < 100000000) {
        count_year++;
        money = (money + 600000) * 1.05;
    }
    printf("%d年(%d後)に資産が%.2f円になります。", count_year, count_year-year, money);

    return 0;
}
