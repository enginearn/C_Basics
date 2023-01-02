#include <stdio.h>

void writeFile(void);
void readFile(void);

int main(void)
{
    writeFile();
    readFile();
}

void writeFile(void)
{
    FILE *file;
    file = fopen("test.txt", "w+");
    int content = 100;
    if (file == NULL)
    {
        printf("File open error!\n");
        return 1;
    }
    else
    {
        printf("File open success!\n");
        fprintf(file, "Hello, world!\n%d\n", content);
        printf("Write it down successfully!\n");
        fclose(file);
        return 0;
    }
}

void readFile(void)
{
    FILE *file;
    file = fopen("test.txt", "r");
    if (file == NULL)
    {
        printf("File open error!\n");
        return 1;
    }
    else
    {
        printf("Read file successfully!\n");
        char str1[100], str2[100];
        int content;
        fscanf(file, "%s %s", &str1, &str2);
        fscanf(file, "%d", &content);
        printf("str1: %s str2: %s\n", str1, str2);
        printf("%d\n", content);
        fclose(file);
        return 0;
    }
}

void writeBinaryFile(void)
{
    FILE *file;
    file = fopen("test.bin", "wb");
    int content = 100;
    if (file == NULL)
    {
        printf("File open error!\n");
        return 1;
    }
    else
    {
        printf("File open success!\n");
        fwrite(&content, sizeof(int), 1, file);
        printf("Write it down successfully!\n");
        fclose(file);
        return 0;
    }
}
