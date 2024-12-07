//https://school.programmers.co.kr/learn/courses/30/lessons/12918


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
