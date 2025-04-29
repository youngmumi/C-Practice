#include <stdio.h>

int main() {
	int i, j;
	int start, end;
	int tmp;

	while (1) {
		printf("구구단의 시작 단을 입력하세요: ");
		scanf_s("%d", &start);
		printf("구구단의 끝 단을 입력하세요: ");
		scanf_s("%d", &end);

		if ((start<2||start>9) || (end < 2 || end > 9)) {
			printf("\n");
			printf("구구단의 범위를 잘못 입력하였습니다.\n다시 입력해 주세요.\n");
		}else {
			break;
		}

		printf("\n");
	}
	
	if (start > end) {
		tmp = start;
		start = end;
		end = tmp;
	}

	for (i = 2; i <= 9; i++) {
		for (j = start; j <= end; j++) {
			printf("%d x %d = %d", j, i, i * j);
			printf("\t");
		}
		printf("\n");
	}

	return 0;
}