#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two numbers with space\n");
    printf("Example 2 3: ");
    // scanf is a function to input data but it is not safe
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%p + %p = %p\n", a, b, a+b);

    printf("%d\n", (int) 3.14);

    char str1[] = "漢字";
    char str2[] = "ABCDEF";
    printf("[%c]\n", str1[0]);
    printf("%s\n", str1);
    printf("size = %d byte\n\n", sizeof(str1));

    printf("[%c]\n", str2[0]);
    printf("%s\n", str2);
    printf("size = %d byte\n\n", sizeof(str2));

    int c, d;
    printf("Enter two numbers with space(fgets): ");
    scanf("%d %d", &c, &d);
    fgets(c, sizeof(c), stdin);
    fgets(d, sizeof(d), stdin);
    if (c == 0 || d == 0) {
        c = atoi(c);
        d = atoi(d);
        printf("%d + %d = %d", c, d, c+d);
    }
    return 0;
}
