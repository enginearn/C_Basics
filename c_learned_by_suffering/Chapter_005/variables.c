#include <stdio.h>

struct Drinks {
    char name[20];
    int price;
};

// void buy_drink(struct Drinks drink);
void calc_drink_price(struct Drinks drink);

int main(void)
{
    int value;
    value = 100;
    printf("value = %d\n", value);
    value++;
    printf("value = %d\n", value);
    value--;
    printf("value = %d\n", value);

    int left = 100;
    int right = 200;
    printf("left = %d, right = %d\n", left, right);
    printf("left + right = %d\n", left + right);
    printf("left - right = %d\n", left - right);
    printf("left * right = %d\n", left * right);
    printf("left / right = %d\n", left / right);
    printf("left %% right = %d\n", left % right);

    double f_left, f_right;
    f_left = 100.0;
    f_right = 20.0;
    printf("f_left = %f, f_right = %f\n", f_left, f_right);
    printf("f_left + f_right = %f\n", f_left + f_right);
    printf("f_left - f_right = %f\n", f_left - f_right);
    printf("f_left * f_right = %f\n", f_left * f_right);
    printf("f_left / f_right = %f\n", f_left / f_right);

    printf("%f\n", 1.05 * 360);
    printf("%d\n", (int)(1.05 * 360));

    int a = 10000, b = 500, c = 3;
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d\n", c);
    printf("a=%5d\n", a);
    printf("b=%5d\n", b);
    printf("c=%5d\n", c);
    printf("a=%05d\n", a);
    printf("b=%05d\n", b);
    printf("c=%05d\n", c);

    double pi = 3.141592653589793238462643383279;
    printf("%6.2f\n", pi);
    printf("123456\n");

    // buy_drink((struct Drinks){"コーラ", 120});
    // buy_drink((struct Drinks){"オレンジジュース", 150});
    // buy_drink((struct Drinks){"水", 100});

    calc_drink_price((struct Drinks){"コーラ", 120});
    calc_drink_price((struct Drinks){"オレンジジュース", 150});
    calc_drink_price((struct Drinks){"水", 100});

    int juice, milk, money, payment, change;
    double tax;
    juice = 198;
    milk = 138;
    money = 1000;
    tax = 1.05;

    payment = (int)((juice + milk *2) *tax);
    change = money - payment;
    printf("お釣りは%d円です", change);

    return 0;
}

// void buy_drink(struct Drinks drink)
// {
//     struct Drinks drink;
//     printf("ドリンクの名前を入力してください: ");
//     scanf("%s", drink.name);
//     printf("ドリンクの値段を入力してください: ");
//     scanf("%d", &drink.price);
//     printf("%sは、%d円です", drink.name, drink.price);

//     return drink;
// }

void calc_drink_price(struct Drinks drink)
{
    double tax = 1.05;
    int total_price = drink.price * 3;
    printf("%sの合計金額は%.2f円です\n", drink.name, total_price * tax);
}
