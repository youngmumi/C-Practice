//https://school.programmers.co.kr/learn/courses/30/lessons/12918
//문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수, solution을 완성하세요. 예를 들어 s가 "a234"이면 False를 리턴하고 "1234"라면 True를 리턴하면 됩니다.

#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <stdbool.h>

bool solution(const char* s) {
    
    int i;
    
    if(strlen(s)==4||strlen(s)==6){
        for(i=0; i< strlen(s); i++){
        if(48 > s[i] || 57 < s[i])
            break;
    }

    }
    
    if(i== strlen(s)) 
        return true;
    else  return false;

}
