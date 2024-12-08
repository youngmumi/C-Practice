//https://school.programmers.co.kr/learn/courses/30/lessons/12977
//주어진 숫자 중 3개의 수를 더했을 때 소수가 되는 경우의 개수를 구하려고 합니다. 숫자들이 들어있는 배열 nums가 매개변수로 주어질 때, nums에 있는 숫자들 중 서로 다른 3개를 골라 더했을 때 소수가 되는 경우의 개수를 return 하도록 solution 함수를 완성해주세요.

#include <stdio.h>
#include <stdlib.h>

int PrimeNumber(sum){
    
    for(int i=2; i<sum; i++){
        if(sum%i==0) {
            return false;
            break;
        }
    }
    return true;
}

int solution(int nums[], size_t nums_len) {
    int answer = 0;
    int sum=0;
    
    for(int i=0; i<nums_len; i++){
        for(int j=i+1; j<nums_len; j++){
            for(int k=j+1; k<nums_len; k++){
                
                sum= nums[i]+nums[j]+nums[k];
                
                if(PrimeNumber(sum)==true){
                    answer++;
                }

            }
        }
    }
    
    return answer;
}
