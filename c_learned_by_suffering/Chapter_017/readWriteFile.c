#include <stdio.h>

void writeFile(void);
void readFile(void);
void writeBinaryFile(void);
void writeBinaryFileWithArray(void);
void readBinaryFile(void);
void writeCSVFile(void);

int main(int argc, char const *argv[])
{
    if (argc > 1) printf("Usage: %s filename", argv[0]);
    fflush(stdin); // file flush buffer to file stream and clear buffer (JUST USE FOR PRACTICE)
    getchar();

    writeFile();
    readFile();
    writeBinaryFile();
    writeBinaryFileWithArray();
    readBinaryFile();
    writeCSVFile();
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

void writeBinaryFileWithArray(void)
{
    int buf[] = {10, 100, 1000, 10000};
    FILE *file;
    file = fopen("testArray.bin", "wb");
    if (file == NULL)
    {
        printf("File open error!\n");
        return 1;
    }
    else
    {
        printf("Binary File open success!\n");
        fwrite(buf, sizeof(buf), 4, file);
        fclose(file);
        return 0;
    }
}

void readBinaryFile(void)
{
    FILE *file;
    int content;
    file = fopen("test.bin", "rb");
    if (file == NULL)
    {
        printf("File open error!\n");
        return 1;
    }
    else
    {
        printf("File open success!\n");
        fread(&content, sizeof(content), 4, file);
        printf("Read BinaryFile successfully!\n");
        printf("readBinaryFile: %d\n", content);
        fclose(file);
        return 0;
    }
}

void writeCSVFile(void)
{
    FILE *file;
    file = fopen("test.csv", "w");
    if (file == NULL)
    {
        printf("File open error!\n");
        return 1;
    }
    else
    {
        printf("File open success!\n");
        fprintf(file, "番号,名前,テストの平均点\n");
        fprintf(file, "1,野比のび太,0\n");
        fprintf(file, "2,源静香,90\n");
        fprintf(file, "3,剛田武,40\n");
        fprintf(file, "4,骨川スネ夫,70\n");
        fprintf(file, "5,出木杉英才,100\n");
        printf("Write it down successfully!\n");
        fclose(file);
        return 0;
    }
}
