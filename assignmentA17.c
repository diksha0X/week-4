#include <stdio.h>

int main() {
    int rollNumber;

    printf("Enter a roll number: ");
    scanf("%d", &rollNumber);

    
    if (rollNumber == 100) {
        printf("Roll number 100 is present.\\n");
    }

    
    if (rollNumber != 100) {
        printf("Roll number 100 is not present (entered: %d).\\n", rollNumber);
    }

    return 0;
}