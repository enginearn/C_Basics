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
        printf("Your are an adultπ");
    }

    // switch statement
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num) {
        case 1:
            printf("γγͺγΌ");
            break;
        case 2:
            printf("γ­γ³");
            break;
        case 3:
            printf("γγΌγγ€γͺγγΌ");
            break;
        case 4:
            printf("γγ°γ―γΌγ");
            break;
        case 5:
            printf("γ°γͺγ³γγ¦γ©γ«");
            break;
        default:
            printf("π");
            break;
    }
    return 0;
}
