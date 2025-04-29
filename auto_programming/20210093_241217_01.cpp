#include <stdio.h>

int main() {
	int i;
	int Array[5] = {};

	printf("** 정수 5개를 입력하세요 **\n\n");

	for (i = 0; i < 5; i++) {
		printf("%d번째 정수를 입력하세요: ", i + 1);
		scanf_s("%d", &Array[i]);
	}

	printf("\n");
	printf("** 입력한 정수의 역순 출력 **\n");

	for (i = 4; i >= 0; i--) {
		printf("%d번째 입력한 정수: %d", i + 1, Array[i]);
		printf("\n");
	}

	return 0;
}
