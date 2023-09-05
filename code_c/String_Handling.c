//https://school.programmers.co.kr/learn/courses/30/lessons/12918


#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <stdbool.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
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
