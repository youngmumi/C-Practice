// 3. 세 과일 가게의 사과, 배, 감 값을 입력하여 배열에 저장하고, 사과 배 감의 평균 가격을 출력하는 프로그램을 작성하시오.
// 2차원 배열 사용

#include <stdio.h>

int main() {
    int market[3][3] = { 0 };
    float sum[3] = { 0 };
    const char *fruits[] = { "사과", "배", "감" };
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%s의 가격을 입력해주세요: ", fruits[i]);
            scanf("%d", &market[i][j]);
            sum[i] += market[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        printf("%s의 평균가격: %.2f\n", fruits[i], sum[i] / 3.0);
    }

    return 0;
}
