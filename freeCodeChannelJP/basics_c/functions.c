#include <stdio.h>
int add(int a, int b);
int hello(void);
int hello_name(char *name);
int fruits(int apple, int orange);

int add(int a, int b) {
    return a + b;
}

int main() {
    int a = 1;
    int b = 2;
    int c = add(a, b);
    printf("%d + %d = %d\n", a, b, c);

    hello();
    hello_name("フリーコードチャンネル");
    int fruits_total = fruits(100, 200);
    printf("Total fruits = %d円\n", fruits_total);
    return 0;
}

int hello() {
    printf("Hello World!\n");
    return 0;
}

int hello_name(char *name) {
    printf("Hello %s!\n", name);
    return 0;
}

int fruits(int apple, int orange) {
    return (apple * 100)+(orange * 200);
}
