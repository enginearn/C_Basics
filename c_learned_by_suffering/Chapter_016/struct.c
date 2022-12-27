#include <stdio.h>
#include <string.h>

void student_print(student, data)
{

}

struct student {
    int year;
    int cls;
    int number;
    char name[64];
    double stature;
    double weight;
};

int main(void)
{
    struct student data; // declare a variable of struct Student

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

    struct student data2 = {3, 4, 18, "Taro", 175.5, 60.5};
    printf("year = %d\n", data2.year);
    printf("cls = %d\n", data2.cls);
    printf("number = %d\n", data2.number);
    printf("name = %s\n", data2.name);
    printf("stature = %f\n", data2.stature);
    printf("weight = %f\n", data2.weight);

    strcpy(data2.name, "Jiro");
    printf("name = %s\n", data2.name);

    return 0;
}
