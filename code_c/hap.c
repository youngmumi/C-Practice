//2-2. 누적 프로그램에서 입력에러가 발생할 경우

#include <stdio.h>

int main() {
	int hap = 0;
	int i, start, end;

	while (1) {
		printf("시작값: ");
		scanf_s("%d", &start);
		printf("끝값: ");
		scanf_s("%d", &end);

		if ((start >= 100 && start <= 200) && (end >= 100 && end <= 200)) {
			break;
		}else {
			printf("다시 입력해주세요\n");
		}
	 }
		
	if(start<end){
		for (i = start; i <= end; i++) {
			if(i%3==0)
				hap += i;
		}
	}
	else {
		for (i = end; i <= start; i++) {
			if (i % 3 == 0)
				hap += i;
		}
	}
	
	printf("누적값: %d", hap);

	return 0;
}
