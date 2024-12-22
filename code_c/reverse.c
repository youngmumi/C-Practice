//입력된 숫자 거꾸로 출력하기

#include <stdio.h>

int main() {
	int array[10] = { };
	int i;

	printf("10개의 정수를 입력하세요: ");

	for (i = 0; i < 10; i++) {
		scanf_s("%d", &array[i]);
	}

	for (i = 9; i >= 0; i--) {
		printf("%d ", array[i]);
	}

	return 0;
}
