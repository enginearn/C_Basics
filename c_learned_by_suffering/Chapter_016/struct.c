#include <stdio.h>
#include <string.h>

struct student1 {
    int year;
    int cls;
    int number;
    char name[64];
    double stature;
    double weight;
};
typedef struct {
    int year;
    int cls;
    int number;
    char name[64];
    double stature;
    double weight;
} student2;

void student_print(student2 data)
{
    printf("year = %d\n", data.year);
    printf("cls = %d\n", data.cls);
    printf("number = %d\n", data.number);
    printf("name = %s\n", data.name);
    printf("stature = %f\n", data.stature);
    printf("weight = %f\n", data.weight);
    return;
}

typedef struct {
    char name[256];
    int age;
    int sex;
} People;

void InputPeople(People *data6);
void ShowPeople(People data6);

int main(void)
{
    struct student1 data; // declare a variable of struct Student

    data.year = 3;
    data.cls = 4;
    data.number = 18;
    data.stature = 175.5;
    data.weight = 60.5;

    printf("year = %d\n", data.year);
    printf("cls = %d\n", data.cls);
    printf("number = %d\n", data.number);
    printf("stature = %f\n", data.stature);
    printf("weight = %f\n", data.weight);

    struct student1 data2 = {3, 4, 18, "Taro", 175.5, 60.5};
    printf("year = %d\n", data2.year);
    printf("cls = %d\n", data2.cls);
    printf("number = %d\n", data2.number);
    printf("name = %s\n", data2.name);
    printf("stature = %f\n", data2.stature);
    printf("weight = %f\n", data2.weight);

    strcpy(data2.name, "Jiro");
    printf("name = %s\n", data2.name);

    student2 data3;
    data3.year = 3;
    data3.cls = 4;
    data3.number = 18;
    data3.stature = 175.5;
    data3.weight = 60.5;

    student_print(data3);

    student2 *data4;
    data4 = &data3;
    printf("year = %d\n", data4->year);
    printf("cls = %d\n", data4->cls);
    printf("number = %d\n", data4->number);
    printf("stature = %f\n", data4->stature);
    printf("weight = %f\n", data4->weight);

    student2 data5[10];
    data5[0].year = 3;
    data5[0].cls = 4;
    data5[0].number = 18;
    data5[0].stature = 175.5;
    data5[0].weight = 60.5;
    printf("year = %d\n", data5[0].year);
    printf("cls = %d\n", data5[0].cls);
    printf("number = %d\n", data5[0].number);
    printf("stature = %f\n", data5[0].stature);
    printf("weight = %f\n", data5[0].weight);

    People data6[3];
    for (int i = 0; i < 3; i++) {
        InputPeople(&data6[i]);
    }

    for (int i = 0; i < 3; i++) {
        ShowPeople(data6[i]);
    }

    return 0;
}

void InputPeople(People *data6)
{
    printf("Input name: ");
    scanf("%s", data6->name);
    printf("Input age: ");
    scanf("%d", &data6->age);
    printf("Input 1:Male 2:Female: ");
    scanf("%d", &data6->sex);
    printf("\n");
}

void ShowPeople(People data6)
{
    char sex[16];

    printf("name = %s\n", data6.name);
    printf("age = %d\n", data6.age);

    if (data6.sex == 1)
    {
        strcpy(sex, "男性");
    } else {
        strcpy(sex, "女性");
    }
    printf("性別: %s\n", sex);
    printf("\n");
}
