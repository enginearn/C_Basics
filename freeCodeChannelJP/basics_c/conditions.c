# include <stdio.h>

int main(void) {
    // if statement
    int apple = 10;
    if (apple > 0) {
        printf("I have %d apples", apple);
        }

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age <= 3) {
        printf("You are a baby");
    }else if (age <= 6) {
        printf("You are a child");
    }else if (age <= 12) {
        printf("You are a kid");
    }else if (age <= 18) {
        printf("You are a teenager");
    }else {
        printf("Your are an adult🎉");
    }

    // switch statement
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num) {
        case 1:
            printf("ハリー");
            break;
        case 2:
            printf("ロン");
            break;
        case 3:
            printf("ハーマイオニー");
            break;
        case 4:
            printf("ホグワーツ");
            break;
        case 5:
            printf("グリンドウォル");
            break;
        default:
            printf("🎃");
            break;
    }
    return 0;
}
