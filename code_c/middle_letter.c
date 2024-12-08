//https://school.programmers.co.kr/learn/courses/30/lessons/12903
//단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요. 단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
char* answer = (char*)malloc(1);
    char arr[strlen(s)];
    char arrs[3];
    strcpy(arr, s);

    int k = strlen(s);

    int i = 0, j = 0;

    if(k % 2 == 0) {
        j = k / 2, i = j - 1;
        arrs[0] = arr[i];
        arrs[1] = arr[j];
    } else {
        i = k /2;
        arrs[0] = arr[i];
    }

    strcpy(answer, arrs);

    return answer;
}
