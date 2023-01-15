#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[256];
    int age;
    int sex
} People;

void InputPeople(People *data);
void OutputPeople(People data);

int main(void)
{
    int *p = malloc(10 * sizeof(int));
    if (p == NULL)
    {
        return 1;
    }
    p[0] = 0;
    p[1] = 1;
    p[2] = 2;
    p[3] = 3;
    p[4] = 4;
    p[5] = 5;
    p[6] = 6;
    p[7] = 7;
    p[8] = 8;
    p[9] = 9;
    for (int i = 0; i < 10; i++)
    {
        printf("%i\n", p[i]);
        }
    free(p);

    int i;
    int *heap;
    heap = (int *)malloc(sizeof(int) * 10);
    if (heap == NULL) exit (0);
    for (i = 0; i < 10; i++)
    {
        heap[i] = i;
    }
    printf("%d\n", heap[5]);

    heap = (int *)realloc(heap, sizeof(int) * 100);
    if (heap == NULL) exit (0);
    for (i = 10; i < 100; i++)
    {
        heap[i] = i;
    }
    printf("%d\n", heap[50]);
    free(heap);

    int index, count, datasize;
    People *people;

    datasize = 10;
    people = (People *)malloc(sizeof(People) * datasize);

    count = 0;
    while (1) {
        InputPeople(&people[count]);
        count++;
        if (count >= datasize)
        {
            datasize += 10;
            people = (People *)realloc(people, sizeof(People) * datasize);
        }
        printf("続けますか？\n");
        printf("1:続ける 2:終了\n");
        scanf("%d", &index);
        if (index != 1)
        {
            free(people);
            break;
        }
    }

    return 0;
}

void InputPeople(People *data)
{
    printf("名前を入力してください\n");
    scanf("%s", data->name);
    printf("年齢を入力してください\n");
    scanf("%d", &data->age);
    printf("性別を入力してください\n");
    printf("1:男性 2:女性\n");
    scanf("%d", &data->sex);
    printf("\n");
}

void OutputPeople(People data)
{
    char sex[10];

    printf("名前: %s\n", data.name);
    printf("年齢: %d\n", data.age);
    if (data.sex == 1)
    {
        strcpy(sex, "男性");
    } else {
        strcpy(sex, "女性");
    }

    printf("性別: %s\n", sex);
    printf("\n");
}
