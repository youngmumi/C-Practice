//1. 조건문, 반복문
//구구단 출력 (for 반복문), 누적출력(범위 내의 숫자), 입력에러 처리(입력에러 시 프로그램 종료)

#include <stdio.h>

int main() {
	int i, dan;

	printf("출력하고 싶은 단을 입력하세요: ");
	scanf_s("%d", &dan);

	while (1) {
		if ((dan <= 9) && (dan >= 2)) {
			break;
		}
		else {
			printf("다시 입력해주세요(입력범위: 2~9): ");
			scanf_s("%d", &dan);
		}
	}

	for (i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}
	
	return 0;
}
