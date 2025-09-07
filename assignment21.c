#include <stdio.h>

int main() {
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if ((int)num == num) {
        printf("%.2f is a whole number.\n", num);
    } else {
        printf("%.2f is not a whole number.\n", num);
    }

    return 0;
}