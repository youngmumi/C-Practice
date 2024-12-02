#include <stdio.h>

int main() {
    char str[10];
    int i = 0;

    printf("숫자를 여러 개 입력: ");
    scanf_s("%s", str, 10);

    int star;

    while (str[i] != '\0') {
        star = (int)(str[i] - '0');

        if (star >= 0 && star <= 9) {
            int j = 0; 
            while (j < star*2) {
                printf("*");
                j++; 
            }
            printf("\n");
        }

        i++;
    }

    return 0;
}
