//잔돈 거슬러주는 프로그램 (배열 이용)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_NUM 3

int main() {
	unsigned int money=0;
	unsigned int tmp_money=0;

	int money_arr[ARR_NUM] = {500, 50, 10};
	char money_string[ARR_NUM][100] = {"오 백",  "오 십", "십"};

	printf("교환할 돈을 입력하세요 : ");
	scanf_s("%u", &money);

	for (int i = 0; i < ARR_NUM; i++) {
		tmp_money = money / money_arr[i];
		printf("%s 원짜리 ==> %d\n", money_string[i], tmp_money);
		money %= money_arr[i];
	}

	printf("바꾸지 못한 돈 ==> %u\n", money);

	return 0;

}
