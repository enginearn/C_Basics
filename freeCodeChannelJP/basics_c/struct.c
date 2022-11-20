#include <stdio.h>

struct Student
{
    char name[4];
    int age;
    int score;
};

struct Fruits
{
    char name[10];
    int price;
};

struct Test
{
    char name[10];
    int japanese;
    int math;
    int english;
};

struct Test student[3] = {
    {"一郎", 80, 90, 100},
    {"次郎", 70, 80, 90},
    {"三郎", 60, 70, 80}};

struct FruitsStock
{
    char name[10];
    int price;
    int stock;
};

void price(struct Fruits *f);
void line(void);
void show(struct Test *t);

int main(void)
{
    struct Student s1 = {"John", 20, 80};
    struct Student s2 = {"Mary", 18, 90};
    struct Student s3 = {"Bob", 19, 70};

    printf("Name: %4s, Age: %d, Score: %d\n", s1.name, s1.age, s1.score);
    printf("Name: %4s, Age: %d, Score: %d\n", s2.name, s2.age, s2.score);
    printf("Name: %4s, Age: %d, Score: %d\n", s3.name, s3.age, s3.score);

    struct Fruits f1 = {"Apple", 100};
    struct Fruits f2 = {"Orange", 200};
    struct Fruits f3 = {"Banana", 300};

    printf("Name: %6s. Price: %d\n", f1.name, f1.price);
    printf("Name: %6s, Price: %d\n", f2.name, f2.price);
    printf("Name: %6s, Price: %d\n", f3.name, f3.price);

    struct Fruits *f; // ポインタ変数の宣言
    f = &f1;
    price(f);

    struct Test *t; // ポインタ変数の宣言
    printf("%10s %10s %10s %10s\n", "Name", "Japanese", "Math", "English");
    line();
    show(&student[0]);
    line();

    struct FruitsStock store = {"Apple", 100, 10};
    struct FruitsStock *p;
    p = &store;
    printf("Name: %6s, Price: %d, Stock: %d\n", p->name, p->price, p->stock);

    return 0;
}

void price(struct Fruits *f)
{
    f->price = 1000;
    printf("Name: %s, Price: %d\n", f->name, f->price);
    line();
}

void line(void)
{
    int i;
    for (i = 0; i < 45; i++)
    {
        printf("-");
    }
    printf("\n");
}

void show(struct Test *t)
{
    for (int i = 0; i < (sizeof(student) / (sizeof(struct Test))); i++)
    {
        t = &student[i];
        printf("%10s %10d %10d %10d\n", t->name, t->japanese, t->math, t->english);
    }
}
