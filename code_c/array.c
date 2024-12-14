//https://school.programmers.co.kr/learn/courses/30/lessons/120583
//정수가 담긴 배열 array와 정수 n이 매개변수로 주어질 때, array에 n이 몇 개 있는 지를 return 하도록 solution 함수를 완성해보세요.

#include <stdio.h>

int solution(int array[], size_t array_len, int n) {
    int i =0;
    
    int result = 0;
    
    for(i=0; i< array_len; i++){
        if(array[i] == n) result++;
    }
    
    return result;
    
}
