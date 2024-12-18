//https://school.programmers.co.kr/learn/courses/30/lessons/12922
//길이가 n이고, "수박수박수박수...."와 같은 패턴을 유지하는 문자열을 리턴하는 함수, solution을 완성하세요. 예를들어 n이 4이면 "수박수박"을 리턴하고 3이라면 "수박수"를 리턴하면 됩니다.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char *add1 = "수";
    char *add2 = "박";
    int len = strlen(add1);
    char *answer = (char*)malloc(n*len);
    for(int i=0; i<n; i++) {
        strcpy(&answer[i*len], i%2==0 ? add1 : add2);
    }

    return answer;
}
