#include <stdio.h>

void printChristmasTree(int height) {
    // 트리 출력
    for (int i = 1; i <= height; i++) {
        // 공백 출력
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    
    // 트리 줄기 출력
    for (int i = 0; i < height - 1; i++) {
        printf(" ");
    }
    printf("|\n");
}

int main() {
    int height;

    printf("크리스마스 트리의 높이를 입력하세요: ");
    scanf("%d", &height);

    if (height < 3) {
        printf("트리 높이는 3 이상이어야 합니다.\n");
    } else {
        printChristmasTree(height);
    }

    return 0;
}
